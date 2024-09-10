#include"Solution.h"

vector<int> Solution::twoSum(vector<int>& nums, int target)
{
    vector<int> two;
    int i, j;
    for (i = 0; i < nums.size(); i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] + nums[i] == target)
            {
                two.push_back(i);
                two.push_back(j);
                break;
            }
        }
    }

    return two;

}