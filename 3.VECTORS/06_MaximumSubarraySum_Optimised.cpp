// 2. using the previous logic a slight optimisation acn be made inside the end loop 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n=7;
    int arr[7]= {3,-4,5,4,-1,7,-8};
    int maxSum=  INT_MIN;

    for(int start=0; start<n; start++){
        int currSum=0;
        for(int end=start; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout<<maxSum;

    return 0;
}