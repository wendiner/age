#ifndef __AGE_H__
#define __AGE_H__

struct age_cell {
  char bg_color,fg_color,symb;
};

void age_draw(struct age_cell* image, char width, char height);

#endif
