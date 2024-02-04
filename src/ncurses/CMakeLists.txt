find_package(Curses REQUIRED)

add_library(fdupes_ncurses STATIC
    commandidentifier.c
    commandidentifier.h
    fileaction.c
    fileaction.h
    filegroup.h
    ncurses-commands.c
    ncurses-commands.h
    ncurses-getcommand.c
    ncurses-getcommand.h
    ncurses-interface.c
    ncurses-interface.h
    ncurses-print.c
    ncurses-print.h
    ncurses-prompt.c
    ncurses-prompt.h
    ncurses-status.c
    ncurses-status.h
    positive_wcwidth.c
    positive_wcwidth.h
    wcs.c
    wcs.h)

target_link_libraries(fdupes_ncurses ${CURSES_LIBRARIES})
