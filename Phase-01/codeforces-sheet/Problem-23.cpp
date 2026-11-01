#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n;
  cin >> n;

  ll nums[n];

  for (size_t i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  ll best = nums[0];
  ll Worst = nums[0];

  ll count = 0;
  for (size_t i = 1; i < n; i++)
  {
    if (nums[i] > best)
    {
      count++;
      best = nums[i];
    }
    else if (nums[i] < Worst)
    {
      count++;
      Worst = nums[i];
    }
  }
  cout << count;
}