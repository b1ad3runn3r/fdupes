find_library(PCRE2_LIBRARIES NAMES pcre2 pcre2-32)
find_path(PCRE2_INCLUDE_DIRS pcre2.h)
if(PCRE2_LIBRARIES AND PCRE2_INCLUDE_DIRS)
    message(STATUS "PCRE2 libs: ${PCRE2_LIBRARIES}")
    message(STATUS "PCRE2 include directory: ${PCRE2_INCLUDE_DIRS}")
    set(PCRE2_FOUND TRUE CACHE BOOL "Found PCRE2 libraries" FORCE)
    add_custom_target(pcre2)
else()
    set(PCRE2_FOUND FALSE CACHE BOOL "Found PCRE2 libraries" FORCE)
    message(STATUS "PCRE2 library not found.")
endif()

add_executable(fdupes
    confirmmatch.c
    confirmmatch.h
    dir.c
    dir.h
    errormsg.c
    errormsg.h
    fdupes.c
    fdupes.h
    flags.c
    flags.h
    fmatch.c
    fmatch.h
    log.c
    log.h
    mbstowcs_escape_invalid.c
    mbstowcs_escape_invalid.h
    removeifnotchanged.c
    removeifnotchanged.h
    sigint.c
    sigint.h)

add_subdirectory(md5)
target_link_libraries(fdupes md5 ${PCRE2_LIBRARIES})
