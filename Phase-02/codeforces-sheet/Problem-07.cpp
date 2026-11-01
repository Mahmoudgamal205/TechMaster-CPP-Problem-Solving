#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int sum = 0;
  string name[n];
  for (int i = 0; i < n; i++)
  {
    cin >> name[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (name[i] == "Tetrahedron")
    {
      sum += 4;
    }
    else if (name[i] == "Cube")
    {
      sum += 6;
    }
    else if (name[i] == "Octahedron")
    {
      sum += 8;
    }
    else if (name[i] == "Dodecahedron")
    {
      sum += 12;
    }
    else if (name[i] == "Icosahedron")
    {
      sum += 20;
    }
  }
  cout << sum;
}