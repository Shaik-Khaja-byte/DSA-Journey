// most optimised approach to solve majority element
// Moore's Voting Algorithm

#include<iostream>
#include<vector>
using namespace std;

int maj_elem(vector<int> nums){

    int freq=0, ans=0, n=nums.size();

    for(int i=0; i<n; i++){
        if(freq==0){
        ans=nums[i];
        freq=1;
        }
        else if(ans==nums[i])
        freq++;
        else
        freq--;
    }

    return ans;

}

int main(){
    vector<int> nums = {1,1,2,2,2,2,2,1,1};

    cout<<maj_elem(nums);

    return 0;
}