#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

vector <int> solution(vector<int>&arr,int num){
    int inp = 0;
    int i;
    vector <int> out;
    for(i=0;i< arr.size(); i++){
        inp = inp*10+arr[i];
    }
    
    inp = inp + num;
    do{
        out.push_back(inp%10);
        inp = inp/10;
    }while(inp>0);
    for(i=0;i<out.size()/2;i++)
        swap(out[i],out[out.size()-1-i]);
    return out;
}

int main(){
    vector <int> input = {1,2,3};
    int num =1;
    vector <int> output = solution(input,num);

    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }cout << endl;
}