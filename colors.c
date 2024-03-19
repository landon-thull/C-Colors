#include "colors.h"

#include <stdio.h>

char* get_color_code(color_t color) {
  switch (color) {
    case (COLOR_BLACK):
      return "0m";
    case (COLOR_RED):
      return "1m";
    case (COLOR_GREEN):
      return "2m";
    case (COLOR_YELLOW):
      return "3m";
    case (COLOR_BLUE):
      return "4m";
    case (COLOR_PURPLE):
      return "5m";
    case (COLOR_CYAN):
      return "6m";
    case (COLOR_WHITE):
      return "7m";
    default:
      return "";
  }
}

void colors_print(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s3%s", COLORS_PREFIX, COLORS_FONT_REGULAR, color_code);
  printf("%s%s", text, COLORS_RESET);
}

void colors_print_bold(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s3%s", COLORS_PREFIX, COLORS_FONT_BOLD, color_code);
  printf("%s%s", text, COLORS_RESET);
}

void colors_print_underline(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s%s3%s", COLORS_PREFIX, COLORS_FONT_UNDERLINE, color_code);
  printf("%s%s", text, COLORS_RESET);
}

void colors_print_background(char* text, color_t color) {
  char* color_code = get_color_code(color);

  printf("%s4%s", COLORS_PREFIX, color_code);
  printf("%s%s", text, COLORS_RESET);
}