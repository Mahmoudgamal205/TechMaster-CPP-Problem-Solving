#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }
  int mishka = 0;
  int chris = 0;

  for (int i = 0; i < n; i++)
  {

    if (arr[i][0] > arr[i][1])
    {
      mishka++;
    }
    else if (arr[i][1] > arr[i][0])
    {
      chris++;
    }
  }
  if (mishka > chris)
    cout << "Mishka";
  else if (chris > mishka)
    cout << "Chris";
  else
    cout << "Friendship is magic!^^";
}