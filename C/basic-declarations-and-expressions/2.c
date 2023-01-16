/*
*  Problem
*  ---------
*  Write a C program to get the C version you are using.
*/

#include <stdio.h>

int main(){
  // Each first brackets are very important in this line 11
  int version =  (__STDC_VERSION__ == 201112) ? (11) :  (__STDC_VERSION__ == 201710) ? (18) : (__STDC_VERSION__ == 201710) ? (99) : (89);
  printf("Version of C  : %d",  version);
  return 0;
}