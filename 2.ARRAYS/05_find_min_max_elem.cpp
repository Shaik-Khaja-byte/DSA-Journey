//using min and max functions to find the smallest and largest element

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[6] = {5,15,22,1,9,-24};

    int smallest = INT_MAX;             // +infinity
    int largest = INT_MIN;              // -infinity

    for(int i=0;i<6;i++){      
       smallest= min(arr[i], smallest); // returns the minimum of two.
       largest= max(arr[i], largest);   // returns the maximum of two.
    }

    cout<<smallest<<"\n"<<largest;

    return 0;
}