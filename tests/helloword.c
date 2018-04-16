#include <ncurses.h>
#include <string.h>

// modified from
// http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/helloworld.html

int main()
{
    int w,h,x,y;
    const char *szHello;

    szHello = "Hello World !!!";

    initscr();          /* Start curses mode          */
    getmaxyx( stdscr, h, w );
    fprintf( stderr, "w=%d,h=%d\n", w, h );
    x = w / 2 - strlen( szHello ) / 2;
    y = h / 2;
    mvprintw( y, x, szHello );  /* Print Hello World          */
    refresh();          /* Print it on to the real screen */
    getch();            /* Wait for user input */
    endwin();           /* End curses mode        */

    return 0;
}

