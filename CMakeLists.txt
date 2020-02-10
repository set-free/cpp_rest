cmake_minimum_required (VERSION 3.12.4) # Set min. cmake version
project (myWork) # Name of project 
add_executable(main main.cpp) # Compile file's

# Add libcurl
#FIND_PACKAGE(CURL REQUIRED)
#add_subdirectory(curl)
#target_link_libraries(main PUBLIC ${CURL_LIBRARIES})
#target_include_directories(main PRIVATE ${CURL_INCLUDE_DIRS})

# Add cpr
add_subdirectory(cpr)
include_directories(${CPR_INCLUDE_DIRS})
target_link_libraries(main ${CPR_LIBRARIES})

# Set compile options
set_target_properties(PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

