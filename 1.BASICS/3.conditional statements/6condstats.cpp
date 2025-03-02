#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if (marks>=90)
    {
        cout<<"A";
    }
    else if(marks>=80 && marks<90){
        cout<<"B";
    }
    else{
        cout<<"C";
    }
    return 0;
}