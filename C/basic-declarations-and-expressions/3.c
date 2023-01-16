/*
*   Problem
*   ---------
*   Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters. And also *   to print a big 'C'.
*/

#include <stdio.h>

int main(){
  // Printing 'F'
  printf("######\n");
  printf("#\n#");
  printf("####\n");
  printf("#\n#\n#\n\n\n");

  // Printing 'C'
  printf("   ######\n");
  printf(" ##\t\t\t##\n");
  printf("#\n#\n#\n#\n#\n");
  printf(" ##\t\t\t##\n");
  printf("   ######\n");
  return 0;
}