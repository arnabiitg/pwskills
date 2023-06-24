#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector <int>& arr, int val){
    int i = 0;
    int j = arr.size()-1;
    int count = 0;
    
    while(i<j){
        while(arr[j] == val&&j>i){
            arr[j] = -1;
            count++;
            j--;
        }
        while(arr[i] != val&&i<j)
            i++;
        if(i<j){
            swap(arr[i],arr[j]);
            arr[j] = -1;
            i++;
            j--;
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {5,4,3,2,2,3,3};
    int val = 3,i=0;
    cout << solution(arr,val) << endl;
    while(arr[i] != -1 && i<arr.size()){
        cout << arr[i] << " ";
        i++;
    }cout << endl;
}