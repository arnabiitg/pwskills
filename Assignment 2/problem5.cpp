/*
Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6
*/
#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> &nums)
{
    if (nums.size() < 2)
        return -1;
    int first_max = INT_MIN;
    int second_max = INT_MIN;
    int third_max = INT_MIN;

    int first_min = INT_MAX;
    int second_min = INT_MAX;

    for (int n : nums)
    {
        if (n > first_max)
        {
            third_max = second_max;
            second_max = first_max;
            first_max = n;
        }
        else if (n > second_max)
        {
            third_max = second_max;
            second_max = n;
        }
        else if (n > third_max)
        {
            third_max = n;
        }

        if (n < first_min)
        {
            second_min = first_min;
            first_min = n;
        }
        else if (n < second_min)
        {
            second_min = n;
        }
    }
    return max(first_max * second_max * third_max, first_max * first_min * second_min);
}

int main()
{
    vector<int> v1{-3, -2, -5};
    cout << "Maximum product is: " << maximumProduct(v1) << endl;
    // Output:-30
    vector<int> v2{};
    cout << "Maximum product is: " << maximumProduct(v2) << endl;
    // Output: -1
    vector<int> v3{-100, -99, -1, 2, 3, 4};
    cout << "Maximum product is: " << maximumProduct(v3) << endl;

    return 0;
}