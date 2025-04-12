//this algoritm allows us to rotate the array to the left by k spaces
#include<iostream>
#include<vector>
using namespace std;

void Rotate_By_K(vector<int>& vec, int n, int k){
    vector<int> temp;
    k = k % n; //prevents you from performing n multiple rotations
    for(int i=0; i<k; i++){ //from 0 to k pushes all the elements into the temporary array 
        temp.push_back(vec[i]);
    }

    for(int i=k; i<n; i++){ //performs the shifting, but from where? it's actually from k itself if you draw it on paper
        vec[i-k] = vec[i]; 
    }

    for(int i=n-k; i<n; i++){ //moving the elements back to the original one, but from where? -> n-k
        vec[i] = temp[i-(n-k)];
    }
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    int n = vec.size();
    int k;
    cin >> k;
    Rotate_By_K(vec, n, k);
    for(int val: vec){
        cout << val << " ";
    }
    return 0;
}