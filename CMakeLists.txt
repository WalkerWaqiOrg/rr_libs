cmake_minimum_required(VERSION 3.10)
project(rr_libs)

set(CMAKE_CXX_STANDARD 11)

if( UNIX AND NOT APPLE )
  set(rt_library rt )
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
					${CMAKE_CURRENT_SOURCE_DIR}/include
                    ${CMAKE_CURRENT_SOURCE_DIR}/libs/cryptonote)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE_FILES)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})