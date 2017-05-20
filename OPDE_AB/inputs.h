#ifndef INPUTS_H
#define INPUTS_H

#include "globals.h"

void checkInputs()
{
  if (arduboy.justPressed(A_BUTTON)) gameState = STATE_GAME_PAUSE;
  if (arduboy.justPressed(B_BUTTON)) gameState = STATE_MENU_MAIN;
}


#endif
