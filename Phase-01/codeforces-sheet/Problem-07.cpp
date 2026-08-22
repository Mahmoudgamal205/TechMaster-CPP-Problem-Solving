#include <iostream>
#include <cmath>
using namespace std;
int main()
{

  int Matrex[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> Matrex[i][j];
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (Matrex[i][j] == 1)
      {
        cout << abs(i - 2) + abs(j - 2);
      }
    }
  }
}