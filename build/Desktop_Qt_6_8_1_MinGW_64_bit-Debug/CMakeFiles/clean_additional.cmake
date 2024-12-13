# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AccountManagement_autogen"
  "CMakeFiles\\AccountManagement_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AccountManagement_autogen.dir\\ParseCache.txt"
  )
endif()
