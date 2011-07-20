#-----------------------------------------------------------------------------
# Settings shared between the build tree and install tree.


#-----------------------------------------------------------------------------
# Settings specific to the build tree.

# The "use" file.
SET(Nanogear_USE_FILE ${Nanogear_BINARY_DIR}/UseNanogear.cmake)

# Determine the include directories needed.
SET(Nanogear_INCLUDE_DIRS_CONFIG
  ${Nanogear_SOURCE_DIR}
)

# Library directory.
SET(Nanogear_LIBRARY_DIRS_CONFIG ${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

# Runtime library directory.
SET(Nanogear_RUNTIME_LIBRARY_DIRS_CONFIG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# Build configuration information.
SET(Nanogear_CONFIGURATION_TYPES_CONFIG ${CMAKE_CONFIGURATION_TYPES})
SET(Nanogear_BUILD_TYPE_CONFIG ${CMAKE_BUILD_TYPE})

#-----------------------------------------------------------------------------
# Configure NanogearConfig.cmake for the build tree.
CONFIGURE_FILE(${Nanogear_SOURCE_DIR}/NanogearConfig.cmake.in
               ${Nanogear_BINARY_DIR}/NanogearConfig.cmake @ONLY IMMEDIATE)

#-----------------------------------------------------------------------------
# Settings specific to the install tree.

# TODO

#-----------------------------------------------------------------------------
# Configure NanogearConfig.cmake for the install tree.

# TODO
