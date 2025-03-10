// implementation of linear search

#include<iostream>
using namespace std;

int LinearSearch(int arr[],int size,int target){

// visit each index value, compare with the target, if found return index, else return -1(invalid index)

    for(int i=0;i<size;i++){

        if(arr[i]==target){
            return i;
        }

    }
    return -1;
}
int main(){
    int arr[]={0,1,2,3,4,5,100};
    int size=7;
    int target=100;

    cout<<LinearSearch(arr,size,target); 

    return 0;
}