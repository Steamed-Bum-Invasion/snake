#include <iostream>
#include <ncurses.h>

int main (int argc, char *argv[]) {

  initscr();
  int x,y;
  x = y = 10;
  move(y,x);

  printw("hello word");

  move(0,0);
  getch();
  endwin();
  return 0;
}
