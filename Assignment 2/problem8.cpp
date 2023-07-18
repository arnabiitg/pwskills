/*
Question 8
You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.

Example 1:
Input: nums = [1], k = 0
Output: 0

Explanation: The score is max(nums) - min(nums) = 1 - 1 = 0.
*/
#include <bits/stdc++.h>
using namespace std;

int smallestRangeI(vector<int> &nums, int k)
{
    // if min(nums)+k<max(nums)+k
    // then return max(nums)-min(nums)-2*k

    // If min(nums) + K >= max(nums) - K,
    //  then return 0

    // return the max of max(nums)-min(nums)-2*k and 0

    int maxi = nums[0];
    int mini = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        maxi = max(maxi, nums[i]);
        mini = min(mini, nums[i]);
    }
    return max(maxi - mini - 2 * k, 0);
}
int main()
{
    vector<int> v = {0, 10};
    cout << smallestRangeI(v, 3) << endl;
    system("pause");

    return 0;
}