#include <iostream>
using namespace std;

/*
 * Problem-03: Sum of Natural Numbers
 *
 * Write a program that:
 * - Reads a positive integer N from the user
 * - Calculates the sum of all natural numbers from 1 to N
 * - Displays the sum and count of numbers
 * - Shows if the sum is even or odd
 *
 * Formula: Sum = N * (N + 1) / 2
 *
 * Example:
 * Input: 5
 * Output:
 *   Sum of numbers 1 to 5: 15
 *   Count of numbers: 5
 *   Sum is: odd
 */

int main()
{
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  if (n <= 0)
  {
    cout << "Please enter a positive integer!" << endl;
    return 1;
  }

  // Calculate sum using formula
  long long sum = (long long)n * (n + 1) / 2;

  cout << "\n--- Results ---\n";
  cout << "Sum of numbers 1 to " << n << ": " << sum << endl;
  cout << "Count of numbers: " << n << endl;

  if (sum % 2 == 0)
  {
    cout << "Sum is: even" << endl;
  }
  else
  {
    cout << "Sum is: odd" << endl;
  }

  // Alternative: Calculate sum using loop
  cout << "\n--- Verification (using loop) ---\n";
  long long loop_sum = 0;
  for (int i = 1; i <= n; i++)
  {
    loop_sum += i;
  }
  cout << "Loop Sum: " << loop_sum << endl;
  cout << "Formula and Loop match: " << (sum == loop_sum ? "Yes" : "No") << endl;

  return 0;
}
