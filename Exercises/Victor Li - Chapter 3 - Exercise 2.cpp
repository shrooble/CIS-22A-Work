/*
  Victor Li
  Chapter 3: Exercise 2
  This program demonstrates the int, double, and char variable types when interacting with user input
*/

/*
Part 1: Design Before You Code
  
  1) This program should collect the age, GPA, and initial from a student
  2) and 3)
  The age should be an integer variable since it should be a whole number and not a decimal.
  The GPA should be a double variable since it should be a decimal number.
  The initial should be a char variable since it should be a single letter.
*/

#include <iostream>

using namespace std;

int main()
{
  int age;
  double gpa;
  char initial;

  cout << "Enter your age: \n";
  cin >> age;
  cout << "Enter your GPA: \n";
  cin >> gpa;
  cout << "Enter your first initial: \n";
  cin >> initial;

/*
Part 2: Predict
  
  If a user enters a letter for age, then the program will crash and the age, GPA, and char variables 
  will output their 'default' values of 0, 7.87263e-85, and whitespace. 
  
  If a user enters 3 instead of 3.5 for GPA, then the double variable will change 3 into a 3.0.
*/

  cout << "\n-------------------\n";
  cout << "Student Information\n";
  cout << "Age: " << age << " years old\n";
  cout << "GPA: " << gpa << endl;
  cout << "First Initial: " << initial << endl;
  
  return 0;
}

/*
Part 4: Debug Scenario
  Sample Output When Entering "20 A 3.7":
  
  Enter your age: 
  20
  Enter your GPA: 
  A
  Enter your first initial: 
  
  -------------------
  Student Information
  Age: 20
  GPA: 0
  First Initial: 
    
  1) The program crashes and outputs a 0 and whitespace for the double GPA and char First Initial variables respectively.
  2) The double variable causes the problem.
  3) The system fails at "cin >> gpa;" since it is expecting a decimal number. 
*/

/*
Part 5: Reflection
  This exercise shows how computers interpret user input based on the variable data type used.
  Using a different variable data type would have the program potentially fail at a different point or display a different output. 
*/
