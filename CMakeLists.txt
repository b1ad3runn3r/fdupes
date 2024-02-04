cmake_minimum_required(VERSION 3.20)
project("fdupes" C)

option(WITH_NCURSES "Build with ncurses library support" ON)
option(WITH_SQLITE "Build with sqlite library support" ON)

if (WITH_NCURSES)
    add_subdirectory(src/ncurses)
else()
    add_compile_definitions(NO_NCURSES)
endif(WITH_NCURSES)

if (WITH_SQLITE)
    add_subdirectory(src/sqlite)
else()
    add_compile_definitions(NO_SQLITE)
endif(WITH_SQLITE)

add_subdirectory(src/fdupes)

if (WITH_NCURSES)
    target_link_libraries(fdupes fdupes_ncurses)
endif(WITH_NCURSES)

if (WITH_SQLITE)
    target_link_libraries(fdupes fdupes_sqlite)
endif(WITH_SQLITE)

unset(WITH_SQLITE CACHE)
unset(WITH_NCURSES CACHE)