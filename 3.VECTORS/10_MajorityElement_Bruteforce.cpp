// 1. brute force approach for majority element

#include<iostream>
#include<vector>
using namespace std;

int maj_elem(vector<int> nums){
    int n=nums.size();

    for(int val: nums){
        int freq=0;
        for(int elem: nums){
            if(elem==val)
            freq++;
        }
        if(freq>n/2)
        return val;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,1,2,2,2};

    cout<<maj_elem(nums);

    return 0;
}

/*

#include <iostream>
#include <vector>
using namespace std;

int Brute(vector<int>& nums) {
    int n = nums.size();
    for (int val : nums) {
        int freq = 0;
        for (int elem : nums) {
            if (elem == val) { // Count occurrences of val
                freq++;
            }
        }
        if (freq > n / 2) { // Majority condition
            return val;
        }
    }
    return -1; // Return -1 if no majority element exists
}

int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 1};
    int result = Brute(nums);
    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found." << endl;
    }
    return 0;
}

*/