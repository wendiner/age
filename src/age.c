#include <stdio.h>
#include "age.h"

void age_draw(struct age_cell* image, char width, char height) {
  printf("\E[2J"); // clears screen
  for (int i = 0; i < width * height; i++) {
    printf("\E[%d;%dH", i / width + 1, i % width + 1); // sets cursor position
    printf("\E[%dm", image[i].bg_color + 40); // sets background color
    printf("\E[%dm", image[i].fg_color + 30); // sets foreground color
    printf("%c", image[i].symb); // prints the character
  }
  printf("\E[0m\n"); // resets cursor properties
}
