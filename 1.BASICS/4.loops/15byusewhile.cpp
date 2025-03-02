#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=0;
    cout<<"enter n:- ";
    cin>>n;
    while(i<=n){
        if(i%2!=0){
      sum=sum+i;
        } 
        i++;
    }
    cout<<sum;
    return 0;

}