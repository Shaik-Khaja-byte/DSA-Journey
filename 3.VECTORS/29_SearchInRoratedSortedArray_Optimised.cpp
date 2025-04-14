#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& vec, int n, int target){

    int st = 0, end = vec.size()-1;

    while(st <= end){

        int mid = st + (end-st)/2;

        if(target == vec[mid])
        return mid;

        else if(vec[st] <= vec[mid]){
            if(vec[st] <= target && target <= vec[mid])
            end = mid - 1;
            else
            st = mid + 1;
        }

        else{
            if(vec[mid] <= target && target <= vec[end])
            st = mid + 1;
            else
            end = mid - 1;
        }
    }
    
    return -1;
}

int main(){
    vector<int> vec = {3,4,5,6,7,0,1,2};
    int n = vec.size();
    int target = 2;
    int index = search(vec, n, target);
    cout << target << " found at index : " << index;
    return 0;
}