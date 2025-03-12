// vector is STL container

#include<iostream>
#include<vector>    // to use vectors include this header
using namespace std;

int main(){
    //types of declaration

    // 1. vector<int> vec; //declaration (currently no elements)

    // 2. vector<int> vec = {1,2,3,4,5}; //vector of size 5 is created

    // 3.
    vector<int> vec(5,0); //creates an array of size 5 and intializes all the 5 indices with 0

    for(int val: vec){ //for each loop
        cout<<val<<" ";
    }
    
    return 0;
}