#include <iostream>
using namespace std;
int main()
{
  int x = 0;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string operation;
    cin >> operation;
    if (operation == "++X" || operation == "X++")
    {
      x++;
    }
    else
    {
      x--;
    }
  }
  cout << x;
}