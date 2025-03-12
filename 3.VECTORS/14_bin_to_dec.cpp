#include<iostream>
using namespace std;

int binTodec(int num){
    int ans = 0, pow = 1;
    while(num>0){
        int remainder = num % 10;
        ans += (remainder*pow);
        num/=10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int num;
    cin>>num;
    cout<<binTodec(num);
    return 0;
}