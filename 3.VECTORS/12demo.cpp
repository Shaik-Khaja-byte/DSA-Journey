#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maj_elem(vector<int> vec){
    int n = vec.size();

   int freq = 0, ans = 0;
   for(int i=0; i<n; i++){
    if(freq == 0){
    ans = vec[i];
    freq = 1;
    }
    else if(ans == vec[i])
    freq++;
    else 
    freq--;
   }
   return ans;
}

int main(){
    vector<int> vec = {1,2,1,2,1};
    
    cout<<maj_elem(vec);

    return 0;
}