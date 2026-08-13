#include <iostream>
using namespace std;

int main()
{
  int w;
  cin >> w;
  if (w % 2 == 1 || w == 2)
  { 
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }

  return 0;
}
//////Or////////
#include <iostream>
using namespace std;

int main()
{
  int w;
  cin >> w;
  if (w % 2 == 0 && w > 2)
  { 
    cout << "yes" << endl;
  }
  else
  {
    cout << "no no no" << endl;
  }

  return 0;
}

/////////Using a function//////
string Watermelon(int w)
{
  retuen (w % 2 == 0 && w > 2) ? "YEW" : "NO";
} 
