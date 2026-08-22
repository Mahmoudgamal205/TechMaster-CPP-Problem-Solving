#include <iostream>
using namespace std;

int main()
{
  int k, n, w;
  cin >> k >> n >> w;

  int total = k * w * (w + 1) / 2;
  int borrow = total - n;
  cout << (n >= total ? 0 : abs(borrow));
}