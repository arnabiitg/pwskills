/*
Question 2
Given an array nums of n integers, return an array of all the unique quadruplets
[nums[a], nums[b], nums[c], nums[d]] such that:
           ● 0 <= a, b, c, d < n
           ● a, b, c, and d are distinct.
           ● nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findNsum(vector<int> &nums, int target, int N, vector<int> &result, vector<vector<int>> &results)
{
    int len = nums.size();
    if (len < N || N < 2 || target < nums[0] * N || target > nums[len - 1] * N)
    {
        return;
    }

    if (N == 2)
    {
        int left = 0, right = len - 1;
        while (left < right)
        {
            int curr_sum = nums[left] + nums[right];
            if (curr_sum == target)
            {
                results.push_back(result);
                results.back().push_back(nums[left]);
                results.back().push_back(nums[right]);
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1])
                {
                    left++;
                }
                while (left < right && nums[right] == nums[right + 1])
                {
                    right--;
                }
            }
            else if (curr_sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    else
    {
        for (int i = 0; i < len - N + 1; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                result.push_back(nums[i]);
                findNsum(nums, target - nums[i], N - 1, result, results);
                result.pop_back();
            }
        }
    }
}

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> results;
    vector<int> result;
    findNsum(nums, target, 4, result, results);
    return results;
}

int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    for (const auto &quad : result)
    {
        for (int num : quad)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
