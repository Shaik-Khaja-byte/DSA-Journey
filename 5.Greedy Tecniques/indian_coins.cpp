#include<bits/stdc++.h>

using namespace std;

int coins_used(vector<int> coins, int v){
    int n = coins.size();
    int ans{};

    for(int i = n-1; i >= 0 && v > 0; i--){  // run the loop in opposite, so that you can select the highest denomination, also keeping in mind that the v(value) is not zero 
        if(v >= coins[i]){ // check for the condition: the value which you want to satisfy must be greater than or equal to the coins[i] 
            ans += v/coins[i]; // when we get that kind of denomination, we try to divide our value with the coin which we selected, and add it to the ans (which gives us the no. of coins used)
            v = v%coins[i]; // find the remainder value and update our value
        }
    }
    return ans; // return the ans
}

int main(){
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};  // vector of denominations of the indian coins given
    int v = 1099; // target to be satisfied using the above denominations 

    cout << coins_used(coins, v);

    return 0;
}