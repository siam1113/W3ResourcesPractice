/**
 *  Problem
 *  --------
 *  Write a program in C++ to find Size of fundamental data types.
 */
#include <iostream>
using namespace std;

int main()
{
  cout << "The maximum limit of char : " << __SCHAR_MAX__ << endl;
  cout << "The maximum limit of int : " << INT8_MAX << endl;
  cout << "The maximum limit of double : " << __DBL_MAX__ << endl;

  return 0;
}