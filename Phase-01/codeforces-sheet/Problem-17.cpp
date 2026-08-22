#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string name_1;
  cin >> name_1;
  string name;
  cin >> name;
  reverse(name.begin(), name.end());
  string name_2 = name;
  cout << (name_1 == name_2 ? "YES" : "NO");
}