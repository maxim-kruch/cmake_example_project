cmake_minimum_required(VERSION 3.10)

#set(CMAKE_C_COMPILER gcc)
#set(CMAKE_CXX_COMPILER g++)
#add_compile_options(-Wall -Wextra -pedantic -Werror)

set(PROJECT_NAME cmake_example_project)
project(${PROJECT_NAME})

set(LIBRARY_NAME ExtraLibrary)
add_subdirectory(${LIBRARY_NAME})

include_directories(inc)

add_executable(${PROJECT_NAME} src/main.c)
target_link_libraries(${PROJECT_NAME} PUBLIC ${LIBRARY_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/${LIBRARY_NAME}")

#add_library(${PROJECT_NAME}_library ${LIBRARY_NAME}/lib.c)