#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int Police = 0, Untreated = 0;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      Police += arr[i];
    }
    else
    {
      if (Police > 0)
      {
        Police--;
      }
      else
      {
        Untreated++;
      }
    }
  }
  cout << Untreated;
}