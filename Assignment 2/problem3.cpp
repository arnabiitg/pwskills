/*
We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.

A subsequence of an array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.

Example 1:
Input: nums = [1,3,2,2,5,2,3,7]
Output: 5

Explanation: The longest harmonious subsequence is [3,2,2,2,3].
*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLHS(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    int n = arr.size();
    int result = 0;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        while (temp < i && arr[i] - arr[temp] > 1)
        {
            temp++;
        }

        if (arr[i] - arr[temp] == 1)
        {
            result = max(result, i - temp + 1);
        }
    }

    return result;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5, 1, 1, 1, 1};

    cout << lengthOfLHS(arr);

    return 0;
}
