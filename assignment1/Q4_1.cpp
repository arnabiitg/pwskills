#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
vector <int> solution(vector <int>&digits){
    vector <int> output(digits.size()+1,0);
    int k = 1;
    int i = digits.size()-1;
    do{
        k = digits[i] +k;
        digits[i] = k%10;
        k /= 10;
        i--;
    }while(k>0 && i>=0);
    if(!digits[0]){
        output[0] = 1;
        return output;
    }
    return digits;
     
}

int main(){
    vector <int> input = {9,9,9};
    int num =1;
    vector <int> output = solution(input);

    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }cout << endl;
}