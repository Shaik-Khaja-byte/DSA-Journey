// ternary statements
// syntax:
//        condition ? str1 : str2 ;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:- ";
    cin>>n;
    //cout<< (n>=0 ? "positive" : "negative") ;
    n>=0 ? cout<<"positive" : cout<<"negative"; //alternate way to write
    return 0;
}