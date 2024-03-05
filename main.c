//
// Created by Landon Thull on 3/4/24.
//

#include <stdio.h>g

#include "colors.h"

int main() {
  colors_print("black\n", COLOR_BLACK);
  printf("Reset\n");
  colors_print("red\n", COLOR_RED);
  printf("Reset\n");
  colors_print("green\n", COLOR_GREEN);
  printf("Reset\n");
  colors_print("yellow\n", COLOR_YELLOW);
  printf("Reset\n");
  colors_print("blue\n", COLOR_BLUE);
  printf("Reset\n");
  colors_print("purple\n", COLOR_PURPLE);
  printf("Reset\n");
  colors_print("cyan\n", COLOR_CYAN);
  printf("Reset\n");
  colors_print("white\n", COLOR_WHITE);
  printf("Reset\n");
  return 0;
}