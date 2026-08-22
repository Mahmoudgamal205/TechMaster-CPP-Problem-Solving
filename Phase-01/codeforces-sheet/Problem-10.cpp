#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string leter;
  cin >> leter;
  int count = 0;

  for (int i = 1; i < n; i++)
  {

    if (leter[i] == leter[i - 1])

      count++;
  }
  cout << count;
}