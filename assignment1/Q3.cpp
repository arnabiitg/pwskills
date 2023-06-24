#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


int solution (vector<int>& arr,int s, int e, int target){
    if(s>e)
        return -1;
    int mid = s+(e-s)/2;
    if(arr[mid] == target)
        return mid;
    else if (arr[mid] >= target)
        return solution(arr,s,mid-1,target);
    else
        return solution(arr,mid+1,e,target);
}

int main(){
    vector <int> arr ={1,2,3,4};
    int target = 10;
    cout << solution(arr,0,arr.size()-1,target) << endl;
}