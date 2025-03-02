#include<iostream>
using namespace std;
int sumOfdigits(int num){
    int digitsum=0;
    while(num>0){
        int remainder= num%10;
        digitsum+=remainder;
        num/=10;
    }
    return digitsum;
}
int main(){
    int num;
    cin>>num;
    cout<<sumOfdigits(num);
    return 0;
}