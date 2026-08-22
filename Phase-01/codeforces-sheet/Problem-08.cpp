#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{

  string String_1;
  string String_2;
  cin >> String_1;
  cin >> String_2;
  for (int i = 0; i < String_1.length(); i++)
      {
          String_1[i] = tolower(String_1[i]);
      }

  for (int j = 0; j < String_2.length(); j++)
      {
          String_2[j] = tolower(String_2[j]);
      }

  if (String_1 > String_2)
  {
    cout << "1";
  }
  else if (String_1 < String_2)
  {
    cout << "-1";
  }
  else if (String_1 == String_2)
  {
    cout << "0";
  }
}