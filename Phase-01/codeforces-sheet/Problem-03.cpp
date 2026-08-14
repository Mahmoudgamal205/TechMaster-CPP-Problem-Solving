#include <iostream>
using namespace std;

int main()
{
  int n, count = 0;
  cin >> n;
  int digitNumber[n][3];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> digitNumber[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    int sum = digitNumber[i][0] + digitNumber[i][1] + digitNumber[i][2];
    if (sum >= 2)
    {
      count++;
    }
  }
  cout << count;
  return 0;
}
