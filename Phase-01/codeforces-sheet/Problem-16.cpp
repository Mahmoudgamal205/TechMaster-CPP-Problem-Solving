#include <iostream>
using namespace std;

int main()
{
  int o;
  cin >> o;
  string n[o];
  for (int i = 0; i < o; i++)
  {
    cin >> n[i];
  }

  int x = 0;
  for (int i = 0; i < o; i++)
  {
    if (n[i] != n[i - 1])
    {
      x++;
    }
  }
  cout << x;
}