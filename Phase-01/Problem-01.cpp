#include <iostream>
using namespace std;

/*
 * Problem-01: Basic Input and Output
 *
 * Write a program that:
 * - Reads two integers from the user
 * - Performs basic arithmetic operations (add, subtract, multiply, divide)
 * - Displays the results
 *
 * Example:
 * Input: 10, 5
 * Output:
 *   10 + 5 = 15
 *   10 - 5 = 5
 *   10 * 5 = 50
 *   10 / 5 = 2
 */

int main()
{
  int a, b;

  cout << "Enter first number: ";
  cin >> a;

  cout << "Enter second number: ";
  cin >> b;

  cout << "\n--- Results ---\n";
  cout << a << " + " << b << " = " << (a + b) << endl;
  cout << a << " - " << b << " = " << (a - b) << endl;
  cout << a << " * " << b << " = " << (a * b) << endl;

  if (b != 0)
  {
    cout << a << " / " << b << " = " << (a / b) << endl;
  }
  else
  {
    cout << "Division by zero is not allowed!" << endl;
  }

  return 0;
}
