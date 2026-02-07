#include <iostream>
using namespace std;

/*
  Create a user-defined function that takes two integers as parameters and returns their sum.

  Harder Problem: --- see problem_1-1.cpp for the answer
  In the function, add the sum into the parameter.
  Note the use of bitwise operator (&).
*/

int findSum(int number_1, int number_2);

int main()
{
  int number_1;
  int number_2;

  cout << "Enter 1st number: ";
  cin >> number_1;

  cout << "Enter 2nd number: ";
  cin >> number_2;

  int sum = findSum(number_1, number_2);

  cout << "The sum is: " << sum;

  return 0;
}

int findSum(int number_1, int number_2)
{
  return number_1 + number_2;
}