#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string x;
  cin >> x;
  int A = 0;
  int D = 0;
  for (int i = 0; i < n; i++)
  {
    if (x[i] == 'A')
    {
      A++;
    }
    else
    {
      D++;
    }
  }
  if (A > D)
  {
    cout << "Anton";
  }
  else if (A < D)
  {
    cout << "Danik";
  }
  else if (A == D)
  {
    cout << "Friendship";
  }
}