#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool solution(vector<int> arr){
    sort(arr.begin(),arr.end());
    int flag = arr[0];
    for(int i=1;i<arr.size();i++){
        if(flag == arr[i])
            return true;
        flag = arr[i]; 
    }
    return false;
}

int main(){
    vector<int> arr ={1,2,3,1};
    cout << solution(arr) << endl;
}