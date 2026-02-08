#include <iostream>
using namespace std;

/*
What to build:
Function takes quiz, midterm, and final scores
Computes average
Returns letter grade

Example functions:
  float computeAverage(float q, float m, float f);
  char getGrade(float average);
*/

float computeAverage(float quiz_score, float midterm_score, float final_score);
char getGrade(float average);

int main()
{
  float quiz_score;
  float midterm_score;
  float final_score;

  cout << "What is your Quiz score?\n";
  cin >> quiz_score;
  cout << "What is your Midterm score?\n";
  cin >> midterm_score;
  cout << "What is your Final score?\n";
  cin >> final_score;

  float average = computeAverage(quiz_score, midterm_score, final_score);

  char letter_grade = getGrade(average);

  cout << "Grade Average: " << average << endl;
  cout << "Letter Grade Equivalent: " << letter_grade;
  return 0;
}

float computeAverage(float quiz_score, float midterm_score, float final_score)
{
  float sum;

  sum = quiz_score + midterm_score + final_score;

  return sum / 3;
}
char getGrade(float average)
{
  if (average < 50.00)
  {
    return 'F';
  }
  else if (average >= 50.00 && average <= 63.99)
  {
    return 'D';
  }
  else if (average >= 64.00 && average <= 77.99)
  {
    return 'C';
  }
  else if (average >= 78.00 && average <= 91.99)
  {
    return 'B';
  }
  else if (average > 91.99)
  {
    return 'A';
  }
  else
  {
    cout << "Invalid Input";
    return ' ';
  }
}