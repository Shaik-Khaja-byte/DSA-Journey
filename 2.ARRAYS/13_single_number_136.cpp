//single number - leetcode #136

#include<iostream>
using namespace std;

int singleNum(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}

int main(){
    int arr[]={1,2,1,2,3};
    int size=5;

    cout<<singleNum(arr,size);

    return 0;
}