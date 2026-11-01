#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> s(n);

    for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }

    sort(s.begin(), s.end());

    int answer = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
      answer = min(answer, s[i + 1] - s[i]);
    }

    cout << answer << '\n';
  }

  return 0;
}
