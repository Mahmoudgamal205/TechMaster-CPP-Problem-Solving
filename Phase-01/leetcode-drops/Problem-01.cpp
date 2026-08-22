#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> runningSum(vector<int> &nums)
  {
    vector<int> result;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      result.push_back(sum);
    }
    return result;
  }
};

int main()
{
  Solution s;
  vector<int> nums = {1, 1, 1, 1};
  vector<int> result = s.runningSum(nums);
  cout << "[";
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i];
    if (i < result.size() - 1)
    {
      cout << ",";
    }
  }
  cout << "]";
}