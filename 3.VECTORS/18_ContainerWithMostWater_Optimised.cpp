#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int> height){
    int maxWater = 0;
    int n = height.size();
    int lp = 0, rp = n-1;

    while(lp<rp){
        int breadth = rp-lp;
        int length = min(height[lp], height[rp]);
        int curWater = length * breadth;
        maxWater = max(maxWater, curWater);
        height[lp]<height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<maxWater(height);

    return 0;
}