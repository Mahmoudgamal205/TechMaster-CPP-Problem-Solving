#include <iostream>
#include <cctype>
using namespace std;

int main()
{
  string name;
  cin >> name;
  int Cip = 0;
  int Smil = 0;

  for (int i = 0; i < name.size(); i++)
  {
    if (isupper(name[i]))
    {
      Cip++;
    }
    else
    {
      Smil++;
    }
  }

  if (Cip > Smil)
  {
    for (int i = 0; i < name.size(); i++)
    {
      name[i] = toupper(name[i]);
    }
  }
  else
  {
    for (int i = 0; i < name.size(); i++)
    {
      name[i] = tolower(name[i]);
    }
  }
  cout << name;
}