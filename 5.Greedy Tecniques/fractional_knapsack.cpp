#include<bits/stdc++.h>

using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2){
    return p1.first > p2.first;
}

int knapsack(vector<int> wt, vector<int> val, int w){
    // need the ratios
    int n = wt.size();
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));

    for(int i=0; i<n; i++){
        double r = val[i]/(double)wt[i];
        ratio[i] = make_pair(r, i);
    }

    // sort the ratios in descending order
    sort(ratio.begin(), ratio.end(), compare);


    int ans = 0;


    // start filling the knapsack
    for(int i=0; i<n; i++){
        // as the ratios are sorted now, we need to be careful with the indexes 
        int ind = ratio[i].second;
        
        // if the weight is less than or equal to the capacity
        if(wt[ind] <= w){
            ans += val[ind];
            w -= wt[ind];
        } else { // if the complete item cannot be placed, use the fractional division (which we calculated already i.e., ratio array) formula -> ratio[i].first * knapscakRemainingCapacity
            ans += ratio[i].first * w;
            w = 0; // WHY? -> because as we have sorted the ratio array, the items with the highest profit goes into the knapsack first and that too in order and when encountered a case where your knapsack capaciy exceeds the weight of the item: that would be the last item which you will be putting in the knapsack. As the logic is defined for calculating that fractional value, so the next logical step is to make weight 0, so that the loop doesn't continue further. And just break from the loop(drectly you can break tho, but we're good programmers, we don't do that) 
            break;
        }
    }

    return ans;

}

int main(){
    vector<int> wt = {20, 10, 30};
    vector<int> val = {100, 60, 120};

    int w = 50;

    cout << knapsack(wt, val, w);

    return 0;
}