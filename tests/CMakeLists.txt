include(FetchContent)

option(${PROJECT_NAME}_ENABLE_COVERAGE "Enable coverage" OFF)

FetchContent_Declare(
  _unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG v2.6.1)

FetchContent_MakeAvailable(_unity)

target_compile_definitions(unity PUBLIC UNITY_INCLUDE_DOUBLE)

file(GLOB_RECURSE ${PROJECT_NAME}_TEST_SOURCES CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/src/*_test.c")

foreach(src IN LISTS ${PROJECT_NAME}_TEST_SOURCES)
  file(RELATIVE_PATH rel ${CMAKE_CURRENT_SOURCE_DIR}/src ${src})
  get_filename_component(rel_dir ${rel} DIRECTORY)
  get_filename_component(base ${rel} NAME_WE)

  if(rel_dir)
    string(REPLACE "/" "_" prefix "${rel_dir}")
    set(name ${prefix}_${base})
  else()
    set(name ${base})
  endif()
  set(target ${PROJECT_NAME}_${name})

  add_executable(${target} ${src})
  target_link_libraries(${target} PRIVATE JML::JML unity::framework)
  target_include_directories(${target} PRIVATE include src)
  add_test(NAME ${target} COMMAND ${target})

  if(${PROJECT_NAME}_ENABLE_COVERAGE)
    target_compile_options(
      ${target} PRIVATE --coverage -O0 -g -fkeep-inline-functions -fno-inline)
    target_link_options(${target} PRIVATE --coverage)
  endif()

  set_property(GLOBAL APPEND PROPERTY ${PROJECT_NAME}_TEST_TARGETS ${target})
endforeach()

if(${PROJECT_NAME}_ENABLE_COVERAGE)
  find_program(GCOVR gcovr REQUIRED)
  get_property(test_targets GLOBAL PROPERTY ${PROJECT_NAME}_TEST_TARGETS)

  add_custom_target(
    coverage
    COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/coverage
    COMMAND ${CMAKE_CTEST_COMMAND} --test-dir ${CMAKE_BINARY_DIR}
            --output-on-failure
    COMMAND
      ${GCOVR} --root ${CMAKE_SOURCE_DIR} --filter ${CMAKE_SOURCE_DIR}/include
      --exclude ${CMAKE_SOURCE_DIR}/tests --html-details
      ${CMAKE_BINARY_DIR}/coverage/index.html --print-summary
      ${CMAKE_BINARY_DIR}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    DEPENDS ${test_targets}
    COMMENT "Running tests and generating gcovr HTML report")
endif()
