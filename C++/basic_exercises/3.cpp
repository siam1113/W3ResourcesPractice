/**
 *  Problem
 *  --------
 *  Write a program in C++ to find Size of fundamental data types.
 */
#include <iostream>
using namespace std;

int main()
{
  cout << "Size of char : " << sizeof(char) << " bytes" << endl;
  cout << "Size of int : " << sizeof(int) << " bytes" << endl;
  cout << "Size of double : " << sizeof(double) << " bytes" << endl;
  cout << "Size of short : " << sizeof(short) << " bytes" << endl;
  cout << "Size of long : " << sizeof(long) << " bytes" << endl;
  cout << "Size of long long : " << sizeof(long long) << " bytes" << endl;
  cout << "Size of float : " << sizeof(float) << " bytes" << endl;

  return 0;
}