// creates a 3x3 grid of red X's over a black background
// you can find a full list of color codes at
// https://en.wikipedia.org/wiki/ANSI_escape_code#3-bit_and_4-bit

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "./age.h"

int main(void) {
  struct age_cell frames[9][9];
  for (int i = 0; i < 9; i++)
  for (int j = 0; j < 9; j++) {
    frames[i][j].bg_color = 0;
    frames[i][j].fg_color = 1;
    frames[i][j].symb = (j == i) ? 'X' : ' ';
  }
  char step = 0;
  while (1) {
    age_draw(frames[step % 9], 3, 3);
    puts("Hit ^Z at any time to halt");
    sleep(1);
    step++;
  }
  return 0;
}
