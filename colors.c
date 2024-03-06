#include "colors.h"

#include <stdio.h>

char* get_color_code(color_t color) {
  switch (color) {
    case (COLOR_BLACK):
      return "30m";
    case (COLOR_RED):
      return "31m";
    case (COLOR_GREEN):
      return "32m";
    case (COLOR_YELLOW):
      return "33m";
    case (COLOR_BLUE):
      return "34m";
    case (COLOR_PURPLE):
      return "35m";
    case (COLOR_CYAN):
      return "36m";
    case (COLOR_WHITE):
      return "37m";
    default:
      return "";
  }
}

void colors_print(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s%s", COLORS_PREFIX, COLORS_FONT_REGULAR, color_code);
  printf("%s%s", text, COLORS_RESET);
}

void colors_print_bold(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s%s", COLORS_PREFIX, COLORS_FONT_BOLD, color_code);
  printf("%s%s", text, COLORS_RESET);
}

void colors_print_underline(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s%s", COLORS_PREFIX, COLORS_FONT_UNDERLINE, color_code);
  printf("%s%s", text, COLORS_RESET);
}