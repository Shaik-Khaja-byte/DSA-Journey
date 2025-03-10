// WAF to calculate sum and product of elements in an array

#include<iostream>
using namespace std;

void SumProd(int arr[],int size,int sum,int product){

       for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }

    cout<<sum<<endl<<product;

}

int  main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum=0;
    int product=1;

    SumProd(arr,size,sum,product);
    
    return 0;
}