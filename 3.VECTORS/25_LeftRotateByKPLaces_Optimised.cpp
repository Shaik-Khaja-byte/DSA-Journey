#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Rotate_By_K(vector<int>& vec, int n, int k){
    k = k % n;
    reverse(vec.begin(), vec.begin()+k);
    reverse(vec.begin()+k, vec.end());
    reverse(vec.begin(), vec.end());
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7};
    int n = vec.size();
    int k;
    cin >> k;
    Rotate_By_K(vec, n, k);
    for(int val : vec){
        cout << val << " ";
    }
    return 0;
}