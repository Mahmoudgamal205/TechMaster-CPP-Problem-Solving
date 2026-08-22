// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//   string add;
//   cin >> add;
//   int count_1 = 0;
//   int count_2 = 0;
//   int count_3 = 0;

//   for (int i = 0; i < add.length(); i++)
//   {
//     if (add[i] == '1' )
//     {
//       count_1++;
//     }
//     else if (add[i] == '2' )
//     {
//       count_2++;
//     }
//     else if (add[i] == '3')
//     {
//       count_3++;
//     }
//   }
//   for (int i = 0; i < count_1; i++)
//  {
//      cout << "1";
//      cout << "+";
//  }

//  for (int i = 0; i < count_2; i++)
//  {
//      cout << "2";
//      cout << "+";
//  }

//  for (int i = 0; i < count_3; i++)
//  {
//      cout << "3";

//      if (i != count_3 - 1)
//      {
//          cout << "+";
//      }
//  }
// }

#include <iostream>
using namespace std;

int main()
{
  string add;
  cin >> add;

  int count_1 = 0;
  int count_2 = 0;
  int count_3 = 0;

  for (int i = 0; i < add.length(); i++)
  {
    if (add[i] == '1')
    {
      count_1++;
    }
    else if (add[i] == '2')
    {
      count_2++;
    }
    else if (add[i] == '3')
    {
      count_3++;
    }
  }

  for (int i = 0; i < count_1; i++)
  {
    cout << '1';
    cout << '+';
  }

  for (int i = 0; i < count_2; i++)
  {
    cout << '2';
    if (i == count_2 - 1)
    {
      cout << '+';
    }
  }

  for (int i = 0; i < count_3; i++)
  {
    cout << '3';
    if (i != count_3 - 1)
    {
      cout << '+';
    }
  }
}