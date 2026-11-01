#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a1, a2, a3, a4;
  cin >> a1 >> a2 >> a3 >> a4;
  string s;
  cin >> s;
  int sum = 0;
  for (char c : s)
  {
    if (c == '1')
    {
      sum += a1;
    }
    else if (c == '2')
    {
      sum += a2;
    }
    else if (c == '3')
    {
      sum += a3;
    }
    else if (c == '4')
    {
      sum += a4;
    }
  }
  cout << sum << endl;
  return 0;
}