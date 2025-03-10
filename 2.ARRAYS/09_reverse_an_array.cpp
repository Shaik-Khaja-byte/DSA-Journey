// reverse an array using TWO-POINTER approach

#include<iostream>
using namespace std;

void ReversedArray(int arr[],int size){

    int start=0, end=size-1;

    while(start < end){ //for even array start>end, for odd start==end
        swap(arr[start], arr[end]); //swap() is used to swap the elements
        start++;
        end--;
    }

}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    ReversedArray(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}