/*Question 6
Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.

You must write an algorithm with O(log n) runtime complexity.

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4

Explanation: 9 exists in nums and its index is 4
*/
#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // agar mid value pe mil jaye
        if (nums[mid] == target)
            return mid;

        // agar mid value less ho jaye
        if (nums[mid] < target)
            start = mid + 1;

        // agar mid value se greater hojaye
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    vector<int> v1{-3, -2, -5};
    cout << "Searching result index: " << search(v1, -2) << endl;
    // Output:-30
    vector<int> v2{};
    cout << "Searching result index: " << search(v2, 5) << endl;
    // Output: -1
    vector<int> v3{-100, -99, -1, 2, 3, 4};
    cout << "Searching result index: " << search(v3, 2) << endl;

    return 0;
}