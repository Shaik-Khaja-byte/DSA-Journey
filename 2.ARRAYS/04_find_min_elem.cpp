// Finding the smallest element in an array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {5,15,22,1,-1,24};

    int smallest = INT_MAX; // its like (+)infinite, initially compare infinity to the first element then condition.
    
    for(int i=0;i<6;i++){       
        if(arr[i]<smallest) // will always be true initially, so that value is stored in variable smallest and continued.
        {
        smallest = arr[i];
        }
    }

    cout<<smallest;

    return 0;
}