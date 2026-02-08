#include <iostream>
using namespace std;

/*
What to build:
A function that accepts a number and determines whether it’s prime.

Bonus:
Make two versions:
void primeCheck(int n)
int primeCheck(int n)
*/

void primeCheck(int number);

int main()
{
  int prime_input;

  cout << "Enter a number to determine if it is a prime number:\n";
  cin >> prime_input;

  primeCheck(prime_input);

  return 0;
}

void primeCheck(int number)
{
  int counter = 0;

  if (number <= 1)
  {
    cout << number << " is not a prime number.";
  }
  else
  {
    for (int i = 1; i <= number; i++)
    {
      if (number % i == 0)
      {
        counter++;
      }
    }
    if (counter > 2)
    {
      cout << number << " is not a prime number.";
    }
    else
    {
      cout << number << " is a prime number.";
    }
  }
}