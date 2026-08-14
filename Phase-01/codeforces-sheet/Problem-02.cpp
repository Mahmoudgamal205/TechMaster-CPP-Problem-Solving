#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n;
  cin >> n;
  string word;
  for (int i = 0; i < n; i++){
    cin >> word;
    char frist = word[0];
    char lest = word[word.length() - 1];
    int number = word.length() - 2;

    if (word.length() > 10)
    {
      cout << frist << number << lest << endl;
    }
    else
    {
      cout << word << endl;
    }
  }

  
}