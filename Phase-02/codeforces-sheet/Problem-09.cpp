#include <bits/stdc++.h>
using namespace std;
int main()
{
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  int min_1 = min({x1, x2, x3});
  int max_2 = max({x1, x2, x3});

  cout << max_2 - min_1 << endl;
  return 0;
}