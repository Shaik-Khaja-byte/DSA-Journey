#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        char ch='A'+i;
        for(j=i+1;j>0;j--){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
return 0;
}