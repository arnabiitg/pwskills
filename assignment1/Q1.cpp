#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1;i++){
            for(int j= i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target)
                    return{i,j};
            }
        }
        return {-1,-1};
    }

int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    vector <int> ans = twoSum(arr,target);
    for (int i=0;i<ans.size();i++){
        cout << ans[i] <<  " ";
    }cout << endl;
}