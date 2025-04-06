#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int stock(vector<int> vec){
    int maxProfit = 0, bestBuy = vec[0];
    for(int i=1; i<vec.size(); i++){
        if(vec[i] > bestBuy){
            maxProfit = max(maxProfit, vec[i] - bestBuy);
        }
        bestBuy = min(bestBuy, vec[i]);
    }
    return maxProfit;
}

int main(){
    vector<int> vec = {7,1,3,4,6,2};

    cout<<stock(vec);

    return 0;
}