#include <iostream>
using namespace std;

void findSum(int number_1, int number_2, int &sum);

int main()
{
  int number_1;
  int number_2;
  int sum = 0;

  cout << "Enter 1st number: ";
  cin >> number_1;

  cout << "Enter 2nd number: ";
  cin >> number_2;

  findSum(number_1, number_2, sum);

  cout << "The sum is: " << sum;

  return 0;
}

void findSum(int number_1, int number_2, int &sum)
{
  sum = number_1 + number_2;
}