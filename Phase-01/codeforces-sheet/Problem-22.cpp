#include <iostream>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int time = 240 - k;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    int problemTime = 5 * i;
    if (time >= problemTime)
    {
      time -= problemTime;
      count++;
    }
    else
    {
      break;
    }
  }
  cout << count << endl;
  return 0;
}