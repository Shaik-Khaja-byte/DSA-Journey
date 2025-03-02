#include<iostream>
using namespace std;

bool isprime(int n){
    //base case
    if(n<2) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}

int main(){
    int limit;
    cin>>limit;

    for(int i=2; i<=limit; i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}