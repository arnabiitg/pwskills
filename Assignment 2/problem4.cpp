/*
Question 4
You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
*/

#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &nums, int n)
{

    int first = 0;
    int last = 0;

    vector<int> v1;
    v1.push_back(0);
    for (int i = 0; i < nums.size(); i++)
    {
        v1.push_back(nums[i]);
    }
    v1.push_back(0);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i + 2 < v1.size();)
    {
        if (v1[i] == 0 && v1[i + 1] == 0 && v1[i + 2] == 0)
        {
            n -= 1;
            i = i + 2;
        }
        else
        {
            i++;
        }
    }

    if (n <= 0)
        return true;
    else
        return false;
}

int main()
{
    vector<int> nums = {1, 0, 0, 0, 1, 0, 0};
    int n;
    cin >> n;
    // cout << "Can place Flowers : ";
    bool ans = canPlaceFlowers(nums, n);
    cout << ans << endl;

    return 0;
}