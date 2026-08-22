#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
  vector<int> nums = {10, 20, 30, 40};
  vector<int>::iterator it=nums.begin();
  auto its=nums.begin()+1;
  for (size_t  i = 0; i < nums.size(); i++)
  {
    cout<<it[i];
    if (i < nums.size()-1)
    {
      cout << ',';
    }
    
  }
  

}