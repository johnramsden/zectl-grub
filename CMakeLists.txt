cmake_minimum_required(VERSION 3.10)

project(libze_plugin_grub LANGUAGES C VERSION 0.0.0 DESCRIPTION "GRUB BE Manager Plugin for zectl")

set (CMAKE_C_STANDARD 11)

set(PLUGIN_SOURCE_FILES src/libze_plugin_grub.c)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/CMakeModules/")

include_directories(include)

include(FindZFS)

add_library(libze_plugin_grub SHARED ${PLUGIN_SOURCE_FILES})
set_property(TARGET libze_plugin_grub PROPERTY POSITION_INDEPENDENT_CODE ON)
set_property(TARGET libze_plugin_grub PROPERTY PREFIX "")

set(PLUGINS_DIRECTORY "" CACHE STRING "Plugins directory")
if(NOT PLUGINS_DIRECTORY)
    set(PLUGINS_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/../")
endif()

message("PLUGINS_DIRECTORY=${PLUGINS_DIRECTORY}")

set_target_properties(libze_plugin_grub PROPERTIES
        IMPORTED_LOCATION_NOCONFIG "${PLUGINS_DIRECTORY}/libze_plugin_grub.so"
        IMPORTED_SONAME_NOCONFIG "libze_plugin_grub.so"
        )

install(TARGETS libze_plugin_grub DESTINATION ${PLUGINS_DIRECTORY})