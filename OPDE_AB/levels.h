#ifndef LEVELS_H
#define LEVELS_H

#include "globals.h"

#define LEVEL_WIDTH 16
#define LEVEL_HEIGHT 7
#define LEVEL_SIZE 112

char level_current = 0;

const unsigned char PROGMEM level_data[] = {
//level 0
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,2,3,3,1,0,0,0,2,3,4,3,1,0,0,0,
};

unsigned char level_get_block(char level_x, char level_y)
{
   return pgm_read_byte_near (level_data + (level_current * LEVEL_SIZE) + level_x + (level_y * LEVEL_WIDTH));
}

void level_draw()
{  
   for (char x=0; x < LEVEL_WIDTH; x++)
   {
      for (char y=0; y < LEVEL_HEIGHT; y++)
      {
          char current_block = level_get_block(x, y);
          if (current_block > 0) sprites.drawSelfMasked(x * 8, y * 8, level_img, current_block-1);
      }
   }
}

void checkCollisions()
{
  
}

#endif
