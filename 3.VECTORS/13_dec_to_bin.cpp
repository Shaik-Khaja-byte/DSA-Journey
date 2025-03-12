#include<iostream>
using namespace std;

int binNum(int nums){
    int ans = 0, pow = 1;
    while(nums>0){
        int remainder = nums%2;
        ans += (remainder * pow);
        nums = nums/2;
        pow *= 10;
    } 
    return ans;
}

int main(){
    int nums;
    cin>>nums;
    cout<<binNum(nums);
    return 0;
}