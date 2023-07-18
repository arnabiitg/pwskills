/*
<aside>
💡 **Question 1**
Given three integer arrays arr1, arr2 and arr3 **sorted** in **strictly increasing** order, return a sorted array of **only** the integers that appeared in **all** three arrays.

**Example 1:**

Input: arr1 = [1,2,3,4,5], arr2 = [1,2,5,7,9], arr3 = [1,3,4,5,8]

Output: [1,5]

**Explanation:** Only 1 and 5 appeared in the three arrays.

</aside>
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findCommonElements(const vector<int> &arr1, const vector<int> &arr2, const vector<int> &arr3)
{
    unordered_set<int> set1(arr1.begin(), arr1.end());
    unordered_set<int> set2(arr2.begin(), arr2.end());
    unordered_set<int> set3(arr3.begin(), arr3.end());

    vector<int> commonElements;

    for (const auto &num : set1)
    {
        if (set2.count(num) && set3.count(num))
        {
            commonElements.push_back(num);
        }
    }

    sort(commonElements.begin(), commonElements.end());

    return commonElements;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 5, 7, 9};
    vector<int> arr3 = {1, 3, 4, 5, 8};

    vector<int> result = findCommonElements(arr1, arr2, arr3);

    cout << "Common elements: ";
    for (const auto &num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
