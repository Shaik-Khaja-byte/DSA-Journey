//this algorithm searches the single element present in the given array
//bruteforce : linear search
//optimised : Binary search
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& vec, int n){
    int st{0}, end{n-1};

    //if there is only one element in an array
    if(n==1) return vec[0];

    while(st <= end){
        int mid{st + (end-st)/2};

        //corner cases
        if(mid == 0 && vec[0] != vec[1]) return vec[mid];
        if(mid == n-1 && vec[n-1] != vec[n-2]) return vec[mid];

        if(vec[mid-1] != vec[mid] && vec[mid] != vec[mid+1]) return vec[mid];

        else if(mid%2==0)//even
        {
            if(vec[mid-1] == vec[mid])//present at left
            end = mid - 1;

            else 
            st = mid + 1;
        }

        else//odd
        {
            if(vec[mid-1] == vec[mid])//present at right
            st = mid + 1;

            else 
            end = mid - 1;
        }
    }
}

int main(){
    vector<int> vec = {1,1,2,2,3,3,4,4,9};
    int n = vec.size();

    int index{ binarySearch(vec, n) };

    cout << index << endl;

    return 0;
}