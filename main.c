//
// Created by Landon Thull on 3/4/24.
//

#include <stdio.h>

#include "colors.h"

int main() {
  // Test normal font colors
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

  // test bold font colors
  colors_print_bold("black bold\n", COLOR_BLACK);
  printf("Reset\n");
  colors_print_bold("red bold\n", COLOR_RED);
  printf("Reset\n");
  colors_print_bold("green bold\n", COLOR_GREEN);
  printf("Reset\n");
  colors_print_bold("yellow bold\n", COLOR_YELLOW);
  printf("Reset\n");
  colors_print_bold("blue bold\n", COLOR_BLUE);
  printf("Reset\n");
  colors_print_bold("purple bold\n", COLOR_PURPLE);
  printf("Reset\n");
  colors_print_bold("cyan bold\n", COLOR_CYAN);
  printf("Reset\n");
  colors_print_bold("white bold\n", COLOR_WHITE);
  printf("Reset\n");

  // test underlined font colors
  colors_print_underline("black underline\n", COLOR_BLACK);
  printf("Reset\n");
  colors_print_underline("red underline\n", COLOR_RED);
  printf("Reset\n");
  colors_print_underline("green underline\n", COLOR_GREEN);
  printf("Reset\n");
  colors_print_underline("yellow underline\n", COLOR_YELLOW);
  printf("Reset\n");
  colors_print_underline("blue underline\n", COLOR_BLUE);
  printf("Reset\n");
  colors_print_underline("purple underline\n", COLOR_PURPLE);
  printf("Reset\n");
  colors_print_underline("cyan underline\n", COLOR_CYAN);
  printf("Reset\n");
  colors_print_underline("white underline\n", COLOR_WHITE);
  printf("Reset\n");

  // test background colors
  colors_print_background("black background\n", COLOR_BLACK);
  printf("Reset\n");
  colors_print_background("red background\n", COLOR_RED);
  printf("Reset\n");
  colors_print_background("green background\n", COLOR_GREEN);
  printf("Reset\n");
  colors_print_background("yellow background\n", COLOR_YELLOW);
  printf("Reset\n");
  colors_print_background("blue background\n", COLOR_BLUE);
  printf("Reset\n");
  colors_print_background("purple background\n", COLOR_PURPLE);
  printf("Reset\n");
  colors_print_background("cyan background\n", COLOR_CYAN);
  printf("Reset\n");
  colors_print_background("white background\n", COLOR_WHITE);
  printf("Reset\n");
  return 0;
}