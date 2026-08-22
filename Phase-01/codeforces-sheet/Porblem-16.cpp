#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p[101];
    int ans[101];

    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
        ans[p[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
}