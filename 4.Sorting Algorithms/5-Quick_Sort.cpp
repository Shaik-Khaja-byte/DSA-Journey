#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& vec, int st, int end){
    int ind = st-1, pivot = vec[end];
    for(int j = st; j <= end-1; j++){
        if(vec[j] <= pivot){                      // for descending : >=
            ind++;
            swap(vec[ind], vec[j]);
        }
    }
    ind++;
    swap(vec[ind], vec[end]);
    return ind;
}

void Quick_Sort(vector<int>& vec, int st, int end){
    if(st < end){
        int PI = partition(vec, st, end);
        Quick_Sort(vec, st, PI-1);
        Quick_Sort(vec, PI+1, end);
    }
}

int main(){
    vector<int> vec = {4,6,2,5,7,9,1,3,5};
    int n = vec.size();

    Quick_Sort(vec, 0, n-1);

    for(int val: vec){
        cout<<val<<" ";
    }

    return 0;
}