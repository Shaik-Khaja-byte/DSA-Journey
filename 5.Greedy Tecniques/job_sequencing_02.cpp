// now suppose you want to print the jobs which you are selecting for getting the max profit - we use the oops concept of classes and objects to acheive this
// as for this task we need to store an extra index, as it might be lost when we sort the jobs - taget which we need in order to solve this is to create this -> (index, deadline, profit)

#include<bits/stdc++.h>
using namespace std;

class Job{ // public class
public: 
    int index;
    int deadline;
    int profit;

    Job(int index, int deadline, int profit){
        this->index = index;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxProfit(vector<pair<int, int>> pairs){
    int n = pairs.size();
    vector<Job> jobs; // vector of objects

    for(int i = 0; i<n; i++){
        jobs.emplace_back(i, pairs[i].first, pairs[i].second); // making the vector of objects ready
    }

    sort(jobs.begin(), jobs.end(), [](Job &a, Job &b){ // sort using lambda function
        return a.profit > b.profit;
    });

    cout << "Selecting Job" << jobs[0].index << endl;
    int profit = jobs[0].profit; // select the first job as usual
    int safeDeadline = 2; // logically, next safeDeadline is 2

    for(int i = 0; i<n; i++){ // main logic
        if(jobs[i].deadline >= safeDeadline){ 
            cout << "Selecting Job" << jobs[i].index << endl;
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }
    return profit;
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