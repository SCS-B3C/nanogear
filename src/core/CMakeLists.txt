set(nanogear_SRCS
    ndirectoryresource.cpp
    nmethod.cpp
    nprotocol.cpp
    nrepresentation.cpp
    nresource.cpp
    nrouter.cpp
    nstatus.cpp
    nmimetype.cpp
)

add_library(Nanogear SHARED ${nanogear_SRCS})

set_target_properties(Nanogear PROPERTIES
    VERSION ${NANOGEAR_MAJOR}.${NANOGEAR_MINOR}.${NANOGEAR_PATCH}
    SOVERSION ${NANOGEAR_MAJOR}
)

target_link_libraries(Nanogear ${Libmagic_LIBRARY} ${QT_LIBRARIES})

# Install the library
install(TARGETS Nanogear
    LIBRARY DESTINATION lib
)

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