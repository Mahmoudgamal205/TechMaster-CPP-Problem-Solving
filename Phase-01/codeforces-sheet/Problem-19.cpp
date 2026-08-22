#include <iostream>
using namespace std;

int main()
{
  string word;
  cin >> word;

  for (int i = 0; i < word.size(); i++)
  {
    word[i] = tolower(word[i]);
    if (word[i] == 'a' || word[i] == 'y' || word[i] == 'e' || word[i] == 'o' || word[i] == 'u' || word[i] == 'i')
    {
      continue;
    }
    cout << "." << word[i];
  }
}