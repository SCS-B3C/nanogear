set(nanogear_SRCS
    ndirectoryresource.cpp
    nmethod.cpp
    nprotocol.cpp
    nrepresentation.cpp
    nresource.cpp
    nrouter.cpp
    nstatus.cpp
    nmimetype.cpp
	nserver.cpp
	nanogear_global.h
	napplication.h
	napplication.cpp
	nclientinfo.h
	ncomponent.h
	nconnector.h
	ndirectoryresource.h
	nmetadata.h
	nmethod.h
	nmimetype.h
	npreference.h
	npreferencelist.h
	nprotocol.h
	nrepresentation.h
	nrequest.h
	nresource.h
	nresponse.h
	nrouter.h
	nserver.h
	nstatus.h
	nuniform.h
)

if(BUILD_SHARED_LIBS)
    add_definitions(-DNANOGEARSHARED)
    add_library(Nanogear SHARED ${nanogear_SRCS})
else(BUILD_SHARED_LIBS)
    add_library(Nanogear STATIC ${nanogear_SRCS})
endif(BUILD_SHARED_LIBS)

message("NanogearIHTTPConnector PROPERTIES
    VERSION ->${NANOGEAR_MAJOR}<-.->${NANOGEAR_MINOR}<-.->${NANOGEAR_PATCH}<-
    SOVERSION ->${NANOGEAR_MAJOR}<-")

set_target_properties(Nanogear PROPERTIES
    VERSION ${NANOGEAR_MAJOR}.${NANOGEAR_MINOR}.${NANOGEAR_PATCH}
    SOVERSION ${NANOGEAR_MAJOR}
)

target_link_libraries(Nanogear ${QT_LIBRARIES})

# Install header files
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
    DESTINATION include/Nanogear
    FILES_MATCHING PATTERN *.h
)

# Install Qt-style headers
# FIXME: On windows systems this would have a bad
#        behaviour
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
    DESTINATION include/Nanogear
    FILES_MATCHING PATTERN N*
)

add_subdirectory(tests)