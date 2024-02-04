find_package(SQLite3)

add_library(fdupes_sqlite STATIC
    getrealpath.c
    getrealpath.h
    hashdb.c
    hashdb.h
    sbasename.c
    sbasename.h
    sdirname.c
    sdirname.h
    xdgbase.c
    xdgbase.h)

target_link_libraries(fdupes_sqlite ${SQLite3_LIBRARIES})
