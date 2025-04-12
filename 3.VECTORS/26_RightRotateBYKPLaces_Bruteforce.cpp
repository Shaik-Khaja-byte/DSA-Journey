//this algoritm allows us to rotate the array to the right by k spaces
#include<iostream>
#include<vector>
using namespace std;

void Rotate_By_K(vector<int>& vec, int n, int k){
    vector<int> temp;

    //store it in the temporary array
    for(int i=n-k; i<n; i++){
        temp.push_back(vec[i]);
    }

    //perform shifting 
    for(int i=n-k-1; i>=0; i--){
        vec[k+i] = vec[i];
    }

    //put the elements back to the original array
    for(int i=0; i<k; i++){
        vec[i] = temp[i];
    }

}

int main(){
    vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    int k;
    cin >> k;
    Rotate_By_K(vec, n, k);

    for(int val: vec){
        cout << val <<" ";
    }

    return 0;
}