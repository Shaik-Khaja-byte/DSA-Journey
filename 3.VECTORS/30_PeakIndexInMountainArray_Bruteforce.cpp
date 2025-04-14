//this algorithm performs searching in a mountain array and returns the peak index
//bruteforce approach solved using linear search 
#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& vec, int n){
    for(int p=0; p<n; p++){                       //traverse the whole array
        if(vec[p-1] < vec[p] && vec[p] > vec[p+1])//we know that the peak index is greater than left part and right part values
        return p;
    }
    return -1;
}

int main(){
    vector<int> vec = {1,2,3,8,9,0};
    int n = vec.size();
    int index = linearSearch(vec, n);
    cout << index;
    return 0;
}