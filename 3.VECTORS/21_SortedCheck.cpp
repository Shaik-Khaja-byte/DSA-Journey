#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> vec, int n){
    for(int i=0; i<n; i++){
        if(vec[i] <= vec[i+1]){

        }
        else{
            return false;
            break;
        }
        return true;
    }
}

int main(){
    vector<int> vec = {1,2,9,7,9,10};
    int n = vec.size();
    cout<<checkSorted(vec, n);
    return 0;
}