#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long n, m, a;
  cin >> n >> m >> a;
  long long sum_1 = (n + a - 1) / a;
  long long sum_2 = (m + a - 1) / a;
  long long total = sum_1 * sum_2;
  cout << total;
}
