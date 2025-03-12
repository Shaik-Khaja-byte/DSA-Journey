//implementing linear search using vectors

#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>& vec,int target){

    for(int i=0; i<vec.size(); i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){
    vector<int> vec={1,2,3,4,5};
    int target= 5;

    int index= LinearSearch(vec,target);

    if(index != -1){
        cout<<"target found at index:- "<<index<<"\n";
    }
    else{
        cout<<"target not found in the vector.";
    }

    return 0;
}