#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second > p2.second; // sort based on profit and in descending order
}

int maxProfit(vector<pair<int, int>> jobs){
    int n = jobs.size(); 

    sort(jobs.begin(), jobs.end(), compare); // sort

    int profit = jobs[0].second; // select the first job's profit already, cuz that's the highest 
    int safeDeadline = 2; // min time to complete one job is 1 unit, so logically the next safest deadline must be greater than 1, i.e., 2

    for(int i = 0; i<n;i++){
        if(jobs[i].first >= safeDeadline){ // the current deadline of the job must be greater than or equal to the safeDeadline
            profit += jobs[i].second; // update the profit by adding current job's profit
            safeDeadline++; // increment the safeDeadline by 1
        }
    }

    return profit; // return the answer
}

int main(){
    int n = 4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0)); // initialization
    
    jobs[0] = make_pair(1, 20); // the pair signifies (deadline, profit)
    jobs[1] = make_pair(4, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    cout << maxProfit(jobs);

    return 0;
}