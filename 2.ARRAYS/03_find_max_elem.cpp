// Finding the largest element in an array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[6] = {5,15,22,1,-1,24};

    int largest = INT_MIN; // its like (-)infinite, initially compare infinity to the first element then condition.
    
    for(int i=0;i<6;i++){       
        if(arr[i]>largest) // will always be true initially, so that value is stored in variable largest and continued.
        {
        largest = arr[i];
        }
    }

    cout<<largest;

    return 0;
}