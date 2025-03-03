// basics of i/o operations with arrays

#include<iostream>
using namespace std;

int main(){

    int marks[10],i,n;

    cout<<"enter n:-\n";
    cin>>n;

    cout<<"enter values:-\n";

    for(i=0;i<n;i++){
        cin>>marks[i];
    }

    cout<<"the marks are:-\n";

    for(i=0;i<n;i++){
        cout<<marks[i]<<" ";
    }

    return 0;
}