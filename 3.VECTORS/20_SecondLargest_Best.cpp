// to find the second largest and second smallest in an array
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int S_Largest(vector<int> vec, int n){
    int largest = vec[0], s_largest = INT_MIN;
    for(int i=1; i<n; i++){
        if(vec[i] > largest){
            s_largest = largest;
            largest = vec[i];
        }
        else if(vec[i] < largest && vec[i] > s_largest){
            s_largest = vec[i];
        }
    }
    return s_largest;
}

int S_Smallest(vector<int> vec, int n){
    int smallest = vec[0], s_smallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(vec[i] < smallest){
            s_smallest = smallest;
            smallest = vec[i];
        }
        else if(vec[i] != smallest && vec[i] < s_smallest){
            s_smallest = vec[i];
        }
    }
    return s_smallest;
}

int main(){
    vector<int> vec = {-1,-5,-2,-3,-8,-7};
    int n = vec.size();

    int result1 = S_Largest(vec, n);
    int result2 = S_Smallest(vec, n);

    cout << "second largest : " << result1 <<"\n";
    cout << "second smallest : " << result2;

    return 0;
}