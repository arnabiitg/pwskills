#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector <int> solution(vector<int>&nums){
    int q,k,n= nums.size();
    for (int i= 0;i<nums.size();i++){
        q =(nums[i]>n)?(nums[i]-n):(nums[i]);
        if(nums[q-1] >n)
            k = q;
        else
            nums[q-1] =nums[q-1] + n;
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]<=n){
            return {k,i+1};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> arr ={1,1};
    vector <int> sol = solution(arr);
    for(int i=0;i<2;i++){
        cout << sol[i] << " ";
    }
}