//algorithm to remove the duplicate elements in-line (without using extra space)
//and also return the size till which the array has unique elements

#include<iostream>
#include<vector>
using namespace std;

int RemDuplicates(vector<int>& vec, int n){
    int index = 0; //place a pointer at the begining of the array
    for(int j=1; j<n; j++){ //iterate from the next index 
        if(vec[j] != vec[index]){ //check for the next unique element
            vec[index+1] = vec[j]; //if found, place it infront of the index pointer
            index++; //and increment it
        }
    }
    return (index+1); //at last to return the size of the array -> index+1
}

int main(){
    vector<int> vec = {1,1,2,2,2,3,3};
    int n = vec.size();
    int result = RemDuplicates(vec, n);
    
    for(int val: vec){
        cout << val << " ";
    }

    cout << "\nsize till the unique elements are present are : " << result;

    return 0;
}