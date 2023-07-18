/*
Question 1
Given an integer array nums of length n and an integer target, find three integers
in nums such that the sum is closest to the target.
Return the sum of the three integers.

You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2

Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/
#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    if (nums.size() < 3)
        return 0;
    sort(nums.begin(), nums.end());
    int prevSum = nums[0] + nums[1] + nums[2];

    // first fix ith nums
    // then taking two pointer check the sum
    for (int i = 0; i < nums.size() - 2; i++)
    {

        // two pointer method l and r
        int l = i + 1, r = nums.size() - 1;

        // agar numbers repeat ho jaye then continue karo
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        while (l < r)
        {
            // intializing sum i.e current sum
            int sum = nums[i] + nums[l] + nums[r];

            // agar sum target ke equal ho jaye then return karo
            if (sum == target)
                return sum;

            if (abs(target - sum) < abs(target - prevSum))
                prevSum = sum;

            if (sum > target)
                r--;

            else
                l++;
        }
    }
    return prevSum;
}

int main()
{
    vector<int> v = {-1, 2, 1, -4};
    cout << threeSumClosest(v, 1);
    return 0;
}