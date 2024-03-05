#ifndef C_COLORS_LIBRARY_H
#define C_COLORS_LIBRARY_H

#define COLORS_PREFIX "\033["
#define COLORS_RESET "\033[0m"

/**
 * Contains options for printable colors.
 */
typedef enum color {
  COLOR_BLACK,
  COLOR_RED,
  COLOR_GREEN,
  COLOR_YELLOW,
  COLOR_BLUE,
  COLOR_PURPLE,
  COLOR_CYAN,
  COLOR_WHITE
} color_t;

/**
 * @brief Prints the given text in a normal font in the given color.
 *
 * @param text The text to print
 * @param color The text color to print with
 */
void colors_print(char* text, color_t color);

#endif //C_COLORS_LIBRARY_H
