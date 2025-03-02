#include<iostream>
using namespace std;
int reverseNumber(int num){
    int reversed =0;
    while(num>0){
        int remainder = num%10;
        reversed = reversed * 10 + remainder;
        num/=10;    
}
    return reversed;
}
int main(){
    int num;
    cin>>num;
    cout<<reverseNumber(num);
    return 0;
}