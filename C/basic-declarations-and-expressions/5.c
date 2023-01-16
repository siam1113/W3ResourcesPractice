/*
 *  Problem
 *  ---------
 *  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
 */

#include <stdio.h>
#include "colors.c"

int main()
{
  int height;
  int width;
  int perimeter;
  int area;

  // Get height
  printf("%sHeight : %s", COLOR_GREEN, COLOR_RESET);
  scanf("%d", &height);

  // Get width
  printf("%sWidth : %s", COLOR_GREEN, COLOR_RESET);
  scanf("%d", &width);

  // Calculations
  perimeter = 2 * (height + width);
  area = height * width;

  printf("\n\nWidth- %d, Height- %d\n\nPerimeter : %d\nArea : %d", width, height, perimeter, area);
  return 0;
}