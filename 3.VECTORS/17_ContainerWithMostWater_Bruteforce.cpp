#include<iostream>
#include<vector>
using namespace std;

int maxWater(vector<int> height){
    int n = height.size();
    int maxWater = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int breadth = j-i;
            int length = min(height[i], height[j]);
            int area = length * breadth;
            maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxWater(height);
    return 0;
}
