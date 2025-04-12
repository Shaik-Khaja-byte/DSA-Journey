#include<iostream>
using namespace std;

int reverseNum(int num){
    int reversed=0;
    while(num>0){
        int remainder = num%10;
        reversed = reversed*10 + remainder; //for sum of the digits reversed += remainder;
        num /= 10;
    }
    return reversed;
}

int main(){
    int num;
    cin>>num;
    cout<<reverseNum(num);
    return 0;
}