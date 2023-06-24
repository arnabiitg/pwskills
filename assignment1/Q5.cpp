#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &first, vector<int>&second)
{
    vector<int> first1;
    for(int i =0;i<first.size();i++){
        if(!first[i])
            break;
        first1.push_back(first[i]);
    }
    int len1 = first1.size();
    int len2 = second.size();
    // merge 2 sorted arrays
    int index1 = 0, index2 = 0, mainIndex = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (first1[index1] < second[index2])
        {
            first[mainIndex++] = first1[index1++];
        }
        else
            first[mainIndex++] = second[index2++];
    }

    // agar len1>len2
    while (index1 < len1)
    {
        first[mainIndex++] = first1[index1++];
    }
    // agar len2<len1

    while (index2 < len2)
    {
        first[mainIndex++] = second[index2++];
    }

}


int main(){
    vector <int> nums1 = {1,2,3,0,0,0};
    vector <int> nums2 = {2,5,6};

    merge(nums1,nums2);

    for(int i=0;i<nums1.size();i++){
        cout << nums1[i] << " ";
    }
}