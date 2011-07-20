set(internalhttp_SRCS 
	nhttpserver.cpp
	nutility.h
	nhttpserver.h
	ihttp_global.h
	)

qt4_wrap_cpp(internalhttp_SRCS nhttpserver.h)

include_directories(${CMAKE_SOURCE_DIR}/src/core)

if(BUILD_SHARED_LIBS)
    add_definitions(-DNANOGEARIHTTPCONNECTORSHARED)
    add_library(NanogearIHTTPConnector SHARED ${internalhttp_SRCS})
else(BUILD_SHARED_LIBS)
    add_library(NanogearIHTTPConnector STATIC ${internalhttp_SRCS})
endif(BUILD_SHARED_LIBS)

set_target_properties(NanogearIHTTPConnector PROPERTIES
    VERSION ${NANOGEAR_MAJOR}.${NANOGEAR_MINOR}.${NANOGEAR_PATCH}
    SOVERSION ${NANOGEAR_MAJOR}
)

target_link_libraries(NanogearIHTTPConnector Nanogear)

# Install header files
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
    DESTINATION include/Nanogear/Connectors/IHTTP
    FILES_MATCHING PATTERN *.h
)

# Install Qt-style headers
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
    DESTINATION include/Nanogear
    FILES_MATCHING PATTERN N*
)

add_subdirectory(tests)