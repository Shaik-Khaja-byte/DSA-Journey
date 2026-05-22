
// solution is similar to activity selection
#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

// core logic
int solution(vector<pair<int, int>> pair){
    int n = pair.size(); // extarcting the size of the vector<pair> 

    sort(pair.begin(), pair.end(), compare); // 1. sort the pairs based on the second value in ascending order

    int currLast = pair[0].second;  // always select the first pair p[0] and extract it's second value
    int count = 1;  // count becomes 1 as p[0] is alreday selected

    for(int i = 1; i<n;i++){  // look for the nect pair 
        if(pair[i].first > currLast){  // finding the non-overlapping pair - current pair start should be greater than the current last
            count++;    // if yes, update the count
            currLast = pair[i].second;  // and the currLast
        }
    }

    return count;  // return the count
}

int main(){
    int n = 5;
    vector<pair<int, int>> pair (n, make_pair(0, 0));   // initialization

    pair[0] = make_pair(5, 24);  // pushing some pairs into vector<pair>
    pair[1] =make_pair(5, 28);
    pair[2] =make_pair(27, 40);
    pair[3] =make_pair(39, 60);
    pair[4] =make_pair(50, 90);

    cout << solution(pair);   // printing the solution

    return 0;
}