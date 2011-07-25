# test for Rest Server
cmake_minimum_required (VERSION 2.8) 
project (iHttpServerSample) 

message("${CMAKE_SOURCE_DIR}")
include_directories (${CMAKE_SOURCE_DIR}/src/core
                     ${CMAKE_SOURCE_DIR}/src/connectors/ihttp
                    ) 

link_directories (${CMAKE_BINARY_DIR}/bin) 

add_executable (ihttpServerSample main.cpp testApplication.cpp testApplication.h nresourcecustom.h) 

target_link_libraries (ihttpServerSample Nanogear NanogearIHTTPConnector ${QT_LIBRARIES}) 