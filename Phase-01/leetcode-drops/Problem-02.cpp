#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {
    int n = digits.size();

    for (int i = n - 1; i >= 0; i--)
    {
      if (digits[i] < 9)
      {
        digits[i]++;
        return digits;
      }
      else
      {
        digits[i] = 0;
      }
    }

    digits.insert(digits.begin(), 1);

    return digits;
  }
};

int main()
{
  Solution s;
  vector<int> digits = {1, 2, 3};
  vector<int> result = s.plusOne(digits);
  cout << "[";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i];
    if (i < result.size() - 1)
    {
      cout << ",";
    }
  }
  cout << "]";
}

/*
int n;
cin >> n;
int arr[n];

double sum = 0;
for (int i = 0; i < n; i++)
{
  cin >> arr[i];
}
arr[n - 1]++;
cout << "[";
for (int i = 0; i < n; i++)
{
  cout << arr[i];
  if (i < n - 1)
  {
    cout << ",";
  }
}
cout << "]";
*/