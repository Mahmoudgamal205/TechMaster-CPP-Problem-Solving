#include <iostream>
using namespace std;
int main()
{
  int x = 5, n;
  cin >> n;

  cout << (n % 5 == 0 ? (n / x) : (n / x + 1));

  // if (n % 5 == 0)
  // {
  //   cout << (n / x);
  // }
  // else
  // {
  //   cout << n / x + 1;
  // }
}