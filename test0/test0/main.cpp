#include<iostream>
#include"Solution.h"
using namespace std;

int main()
{
	vector<int> nums;
	vector<int> sums;
	int target=-6;
	nums.push_back(-1);
	nums.push_back(-2);
	nums.push_back(-3);
	nums.push_back(-4);
	Solution s;
	sums = s.twoSum(nums, target);
	for (int i = 0; i < sums.size(); i++) {
		cout << sums[i] << endl;
	}


}