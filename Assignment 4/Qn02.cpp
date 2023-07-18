/*
<aside>
💡 **Question 2**

Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Note** that the integers in the lists may be returned in **any** order.

**Example 1:**

**Input:** nums1 = [1,2,3], nums2 = [2,4,6]

**Output:** [[1,3],[4,6]]

**Explanation:**

For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. Therefore, answer[0] = [1,3].

For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. Therefore, answer[1] = [4,6].

</aside>
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findDistinctElements(const vector<int> &nums1, const vector<int> &nums2)
{
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> set2(nums2.begin(), nums2.end());

    vector<int> distinctInNums1;
    vector<int> distinctInNums2;

    for (const auto &num : set1)
    {
        if (set2.count(num) == 0)
        {
            distinctInNums1.push_back(num);
        }
    }

    for (const auto &num : set2)
    {
        if (set1.count(num) == 0)
        {
            distinctInNums2.push_back(num);
        }
    }

    vector<vector<int>> answer;
    answer.push_back(distinctInNums1);
    answer.push_back(distinctInNums2);

    return answer;
}

int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = findDistinctElements(nums1, nums2);

    cout << "[";
    for (const auto &num : result[0])
    {
        cout << num << ",";
    }
    cout << "] ";

    cout << "[";
    for (const auto &num : result[1])
    {
        cout << num << ",";
    }
    cout << "]";

    return 0;
}
