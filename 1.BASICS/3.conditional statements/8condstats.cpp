// another approach to solve the previous problem:-
// by comparing the characters with the ASCII values
// here implicit conversion of character to integer takes place
// by the compiler itself. as the characters are ultimately stored as integers in memory 

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the  character:- \n";
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"lower case!";
    }
    else if(ch>=65 && ch<=90){
        cout<<"upper case!";
    }
    else{
        cout<<"invalid character!";
    }
    return 0;
}