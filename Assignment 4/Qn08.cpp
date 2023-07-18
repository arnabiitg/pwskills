/*
<aside>
💡 **Question 8**

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

*Return the array in the form* [x1,y1,x2,y2,...,xn,yn].

**Example 1:**

**Input:** nums = [2,5,1,3,4,7], n = 3

**Output:** [2,3,5,4,1,7]

**Explanation:** Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].

</aside>
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(const vector<int> &nums, int n)
{
    vector<int> result(nums.size());

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        result[index++] = nums[i];
        result[index++] = nums[i + n];
    }

    return result;
}

int main()
{
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> shuffledArray = shuffle(nums, n);

    cout << "Shuffled array: ";
    for (const auto &num : shuffledArray)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
