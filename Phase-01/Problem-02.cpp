#include <iostream>
using namespace std;

/*
 * Problem-02: Finding the Maximum of Three Numbers
 *
 * Write a program that:
 * - Reads three integers from the user
 * - Finds and displays the maximum number
 * - Also displays the minimum number
 * - Calculates their difference
 *
 * Example:
 * Input: 25, 10, 30
 * Output:
 *   Maximum: 30
 *   Minimum: 10
 *   Difference: 20
 */

int main()
{
  int num1, num2, num3;

  cout << "Enter three numbers:\n";
  cout << "Number 1: ";
  cin >> num1;
  cout << "Number 2: ";
  cin >> num2;
  cout << "Number 3: ";
  cin >> num3;

  // Find maximum
  int maximum = num1;
  if (num2 > maximum)
    maximum = num2;
  if (num3 > maximum)
    maximum = num3;

  // Find minimum
  int minimum = num1;
  if (num2 < minimum)
    minimum = num2;
  if (num3 < minimum)
    minimum = num3;

  cout << "\n--- Results ---\n";
  cout << "Maximum: " << maximum << endl;
  cout << "Minimum: " << minimum << endl;
  cout << "Difference: " << (maximum - minimum) << endl;

  return 0;
}
