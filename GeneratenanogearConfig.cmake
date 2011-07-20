#-----------------------------------------------------------------------------
# Settings shared between the build tree and install tree.


#-----------------------------------------------------------------------------
# Settings specific to the build tree.

# The "use" file.
SET(nanogear_USE_FILE ${nanogear_BINARY_DIR}/Usenanogear.cmake)

# Determine the include directories needed.
SET(nanogear_INCLUDE_DIRS_CONFIG
  ${nanogear_SOURCE_DIR}
)

# Library directory.
SET(nanogear_LIBRARY_DIRS_CONFIG ${nanogear_BINARY_DIR})

# Runtime library directory.
SET(nanogear_RUNTIME_LIBRARY_DIRS_CONFIG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# Build configuration information.
SET(nanogear_CONFIGURATION_TYPES_CONFIG ${CMAKE_CONFIGURATION_TYPES})
SET(nanogear_BUILD_TYPE_CONFIG ${CMAKE_BUILD_TYPE})

#-----------------------------------------------------------------------------
# Configure nanogearConfig.cmake for the build tree.
CONFIGURE_FILE(${nanogear_SOURCE_DIR}/nanogearConfig.cmake.in
               ${nanogear_BINARY_DIR}/nanogearConfig.cmake @ONLY IMMEDIATE)

#-----------------------------------------------------------------------------
# Settings specific to the install tree.

# TODO

#-----------------------------------------------------------------------------
# Configure nanogearConfig.cmake for the install tree.

# TODO
