cmake_minimum_required(VERSION 3.16)

project(
  JML
  VERSION 0.1.0
  LANGUAGES C)

option(${PROJECT_NAME}_BUILD_TESTS "Build tests" OFF)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(${PROJECT_NAME}_HEADERS include/jml/types.h)

add_library(${PROJECT_NAME} INTERFACE ${${PROJECT_NAME}_HEADERS})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

if(${PROJECT_NAME}_BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

target_include_directories(
  ${PROJECT_NAME}
  INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:include>)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT JMLTargets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

set(JML_INSTALL_CMAKEDIR ${CMAKE_INSTALL_LIBDIR}/cmake/JML)

install(
  EXPORT JMLTargets
  FILE JMLTargets.cmake
  NAMESPACE JML::
  DESTINATION ${JML_INSTALL_CMAKEDIR})

configure_package_config_file(
  ${CMAKE_CURRENT_SOURCE_DIR}/cmake/JMLConfig.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/JMLConfig.cmake
  INSTALL_DESTINATION ${JML_INSTALL_CMAKEDIR})

write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/JMLVersionConfig.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMajorVersion)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/JMLConfig.cmake
              ${CMAKE_CURRENT_BINARY_DIR}/JMLVersionConfig.cmake
        DESTINATION ${JML_INSTALL_CMAKEDIR})
