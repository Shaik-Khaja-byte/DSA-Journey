// using min and max functions to find the positions of smallest and largest elements

#include <iostream>
#include<climits>
using namespace std;

int main(){

    int index,index2,i;
    int arr[6] = {5,15,22,1,9,-24};
    int smallest = INT_MAX; 
    int largest = INT_MIN;

    for(i=0;i<6;i++){      

       smallest= min(arr[i], smallest);

        if(smallest==arr[i]){
        index=i;
       }

       largest= max(arr[i], largest);

        if(largest==arr[i]){
        index2=i;
       }

    }
    
    cout<<smallest<<" "<<index<<"\n"<<largest<<" "<<index2;

    return 0;
}