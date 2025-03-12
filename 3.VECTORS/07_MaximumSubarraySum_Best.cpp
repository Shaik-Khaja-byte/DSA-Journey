// 3. best way to find maximum sub array
// KADANE'S Algorithm

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n= 7;
    int arr[7]= {-1,-2,-3,-4,-5,-6,-7};
    int maxsum= INT_MIN, cursum=0;

    for(int i=0;i<n;i++){
        cursum+= arr[i];
        maxsum= max(cursum, maxsum);
        if(cursum<0){   //if cursum is -ve reset it to 0
            cursum=0;
        }
    }

    cout<<maxsum<<" "<<cursum;
    
    return 0;
}