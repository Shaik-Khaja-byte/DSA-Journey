#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cin>>n;  
    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<"Sum of "<<n<<" natural numbers:- "<<sum;
    return 0;
}