#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  string word;
  cin >> word;

  int letters[26] = {};

  for (int i = 0; i < n; i++)
  {
    word[i] = tolower(word[i]);
    letters[word[i] - 'a'] = 1;
  }

  for (int i = 0; i < 26; i++)
  {
    if (letters[i] == 0)
    {
      cout << "NO";
      return 0
    }
  }
  cout << "YES";
}