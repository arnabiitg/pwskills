/*
<aside>
💡 **Question 6**
Given an integer array nums sorted in **non-decreasing** order, return *an array of **the squares of each number** sorted in non-decreasing order*.

**Example 1:**

Input: nums = [-4,-1,0,3,10]

Output: [0,1,9,16,100]

**Explanation:** After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100]

</aside>
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSquares(vector<int> nums)
{
    vector<int> result;
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        if (abs(nums[start]) > abs(nums[end]))
        {
            result.insert(result.begin(), nums[start] * nums[start]);
            start++;
        }
        else
        {
            result.insert(result.begin(), nums[end] * nums[end]);
            end--;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> sortedSquaresArray = sortedSquares(nums);

    cout << "Sorted squares array: ";
    for (const auto &num : sortedSquaresArray)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}