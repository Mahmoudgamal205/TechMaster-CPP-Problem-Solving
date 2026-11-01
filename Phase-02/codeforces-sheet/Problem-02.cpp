#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int maxIndex = 0;
  int minIndex = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }

    if (arr[i] <= arr[minIndex])
    {
      minIndex = i;
    }
  }

  int answer = 0;

  while (maxIndex > 0)
  {
    swap(arr[maxIndex], arr[maxIndex - 1]);
    if (maxIndex - 1 == minIndex)
    {
      minIndex++;
    }

    maxIndex--;
    answer++;
  }

  while (minIndex < n - 1)
  {
    swap(arr[minIndex], arr[minIndex]);
    minIndex++;
    answer++;
  }

  cout << answer << endl;

  return 0;
}