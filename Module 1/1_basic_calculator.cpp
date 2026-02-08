#include <iostream>
#include <iomanip>
using namespace std;

/*
What to build:
Create separate functions for:

add()
subtract()
multiply()
divide()

Requirements:
Use functions with parameters and return values
Call the functions from main()
*/

float add(float &result);
float subtract(float &result);
float multiply(float &result);
float divide(float &result);

int main()
{

  int choice_function;
  float result = 0;

  do
  {
    cout << "Welcome to the basic calculator!\n";
    cout << "Choose your functions:\n";

    cout << "[1] Add\n";
    cout << "[2] Subtract\n";
    cout << "[3] Multiply\n";
    cout << "[4] Divide\n\n";
    cout << "[5] Show Results\n";

    cout << " : ";
    cin >> choice_function;

    switch (choice_function)
    {
    case 1:
      add(result);
      break;
    case 2:
      subtract(result);
      break;
    case 3:
      multiply(result);
      break;
    case 4:
      divide(result);
      break;
    case 5:
      cout << fixed << setprecision(2) << "Results: " << result;
      break;
    default:
      cout << "Invalid Input.";
    }
  } while (choice_function != 5);

  return 0;
}

float add(float &result)
{
  int amount_to_add;
  float input_number;

  cout << "How many numbers will you add?\n";
  cin >> amount_to_add;

  cout << "Enter " << amount_to_add << " numbers:\n";
  for (int i = 0; i < amount_to_add; i++)
  {
    cin >> input_number;

    result += input_number;
  }

  return result;
}
float subtract(float &result)
{
  int amount_to_add;
  float input_number;

  cout << "How many numbers will you add?\n";
  cin >> amount_to_add;

  cout << "Enter " << amount_to_add << " numbers:\n";
  for (int i = 0; i < amount_to_add; i++)
  {
    cin >> input_number;

    result -= input_number;
  }

  return result;
}
float multiply(float &result)
{
  int amount_to_add;
  float input_number;

  cout << "How many numbers will you add?\n";
  cin >> amount_to_add;

  cout << "Enter " << amount_to_add << " numbers:\n";
  for (int i = 0; i < amount_to_add; i++)
  {
    cin >> input_number;

    result *= input_number;
  }

  return result;
}
float divide(float &result)
{
  int amount_to_add;
  float input_number;

  cout << "How many numbers will you add?\n";
  cin >> amount_to_add;

  cout << "Enter " << amount_to_add << " numbers:\n";
  for (int i = 0; i < amount_to_add; i++)
  {
    cin >> input_number;

    result /= input_number;
  }

  return result;
}