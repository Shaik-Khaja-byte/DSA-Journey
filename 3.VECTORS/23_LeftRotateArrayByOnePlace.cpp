//this algorithm rotates the array by one place for example:
// I/p : {1,2,3,4,5} --> O/P : {2,3,4,5,1}
#include<iostream>
#include<vector>
using namespace std;

void L_Rotate_By_1(vector<int>& vec, int n){
    int temp = vec[0]; //store the first element which is to be rotated (so that you don't loose it)
    for(int i=1; i<n; i++){ //itreate from the next index 
        vec[i-1] = vec[i]; //perform shifting
    }
    vec[n-1] = temp; //place it into it's correct position
}

int main(){
    vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    L_Rotate_By_1(vec, n);
    for(int val: vec){
        cout << val << " ";
    }
    return 0;
}