#include<iostream>
using namespace std;
int main(){
    int i,n,fact=1;
    cout<<"enter n:- "<<endl;
    cin>>n;
    if(n==0||n==1){
        cout<< 1;
    }
    else{
           for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    }
    return 0;
}