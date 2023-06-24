#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solution(vector<int> &nums){
    int i = 0; 
    while(i<nums.size() && nums[i] != 0)
        i++;
    for(int j =i+1;j<nums.size();j++){
        if(nums[j] !=0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}

int main(){
    vector <int> arr ={0,1,0,3,12};
    solution(arr);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }cout << endl;
}