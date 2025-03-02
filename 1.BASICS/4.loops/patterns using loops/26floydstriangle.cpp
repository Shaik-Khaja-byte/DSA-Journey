#include<iostream>
using namespace std;
int main(){
    int i,j,n,num=1;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){ //for(j=i+1;j>0;J--) [VALID]
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}