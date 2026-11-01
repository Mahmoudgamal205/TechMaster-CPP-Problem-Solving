#include <iostream>
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
  int left = 0;
  int right = n - 1;

  int temp_1 = 0;
  int temp_2 = 0;

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      if (arr[left] > arr[right])
      {
        temp_1 += arr[left];
        left++;
      }
      else
      {
        temp_1 += arr[right];
        right--;
      }
    }
    else
    {
      if (arr[left] > arr[right])
      {
        temp_2 += arr[left];
        left++;
      }
      else
      {
        temp_2 += arr[right];
        right--;
      }
    }
  }
  cout << temp_1 <<" "<<temp_2;
}