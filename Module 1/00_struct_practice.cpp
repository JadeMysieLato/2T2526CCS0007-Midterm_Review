#include <iostream>
#include <iomanip>
using namespace std;

struct student
{
  string name;
  int student_number = 0;
  float grade[3];
  float average = 0;
};

float calculate_average(float number[])
{
  float sum = 0;
  for (int i = 0; i < 3; i++)
  {
    sum += number[i];
  }

  return sum / 3;
}

int main()
{
  student students[10];
  int amount_of_student;

  cout << "How many students? ";
  cin >> amount_of_student;

  cout << "Enter Information:\n";
  for (int i = 0; i < amount_of_student; i++)
  {
    cin.ignore();
    cout << "Student No. " << i + 1 << endl;
    cout << "Student Name: ";
    getline(cin, students[i].name);

    cout << "Student Number: ";
    cin >> students[i].student_number;

    for (int j = 0; j < 3; j++)
    {
      cout << "Grade " << j + 1 << ": ";
      cin >> students[i].grade[j];
    }

    students[i].average = calculate_average(students[i].grade);
  }

  cout << "\nINFORMATION\n";

  for (int i = 0; i < amount_of_student; i++)
  {
    cout << endl;
    cout << "Student No. " << i + 1 << endl;
    cout << "Student Name: " << students[i].name << endl;
    cout << "Student Number: " << students[i].student_number << endl;
    cout << "Grade Average: " << fixed << setprecision(2) << students[i].average;
    cout << endl;
  }

  return 0;
}