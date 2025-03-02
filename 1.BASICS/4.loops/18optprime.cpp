#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter n:- ";
    cin>>n;
    bool isPrime = true;

   for(i=2;i*i<=n;i++){  //to chreck the repeated factors
    if(n%i==0)           //which will be i <= (n)^1/2 
    isPrime=false;
    break;
   }

   if(isPrime==true){
    cout<<"prime";
   } else{
    cout<<"non prime";
   }
   return 0;

}