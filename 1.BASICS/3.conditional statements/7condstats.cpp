// check whether the character is upper or lower case

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the  character:- \n";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lower case!";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"upper case!";
    }
    else{
        cout<<"invalid character!";
    }
    return 0;
}