/**
 *  Problem
 *  --------
 *  Write a program in C++ to print the sum of two numbers.
 */
#include <iostream>
using namespace std;

int main()
{
  int num1;
  int num2;
  int sum;

  // Getting the numbers
  cout << "Number 1 : ";
  cin >> num1;
  cout << "Number 2 : ";
  cin >> num2;

  // Calculate and Print the sum
  sum = num1 + num2;
  cout << "Sum :" << sum << endl;

  return 0;
}