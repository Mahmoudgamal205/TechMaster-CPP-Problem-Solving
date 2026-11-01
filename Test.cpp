#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  string nameEmplyee[n];
  float salaries[n];
  for (int i = 0; i < n; i++)
  {
    cin >> nameEmplyee[i];
    cout << endl;
    cin >> salaries[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << nameEmplyee[i] << endl;
    cout << salaries[i] * 0.10 << endl;
  }
}