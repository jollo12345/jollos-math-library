include(FetchContent)

FetchContent_Declare(
  _unity
  GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
  GIT_TAG v2.6.1)

FetchContent_MakeAvailable(_unity)

set(${PROJECT_NAME}_SOURCES)

add_executable(${PROJECT_NAME}_TESTS src/main.c)

target_compile_definitions(unity PUBLIC UNITY_INCLUDE_DOUBLE)

target_link_libraries(${PROJECT_NAME}_TESTS PRIVATE JML::JML unity::framework)

target_link_directories(${PROJECT_NAME}_TESTS PRIVATE src)
