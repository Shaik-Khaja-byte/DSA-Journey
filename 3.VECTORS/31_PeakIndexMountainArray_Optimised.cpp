#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& vec, int n){
    int st = 1, end = n-2;
    while(st <= end){
        int mid = st + (end-st)/2;

        if(vec[mid-1] < vec[mid] && vec[mid] > vec[mid+1])
        return mid;

        else if(vec[mid-1] < vec[mid]) //mid is lying in the increasing part of the mountain
        st = mid + 1;                  //then search in the right part of the mountain

        else                           //mid is lying in the decreasing part of the mountain 
        end = mid - 1;                 //then search in the left part of the mountain
    }
    return -1;
}

int main(){
    vector<int> vec = {0,3,8,9,5,2};
    int n = vec.size();
    int index = binarySearch(vec, n);
    cout << "peak index is : " << index;
    return 0;
}