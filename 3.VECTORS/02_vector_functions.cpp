// functions used with vectors

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"size before pushing:- "<<vec.size(); //size() function - returns the size

    cout<<"\npushing the elments:- "; //push_back() function - pushes the elements to the back

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    for(int val : vec){ 
        cout<<val<<" ";
    }

    vec.pop_back(); //pop_back() function - pops the elements from the back

    cout<<"\nafter poping:- ";

    for(int val : vec){ 
        cout<<val<<" ";
    }

    cout<<"\nsize = "<<vec.size(); 

    cout<<"\nback = "<<vec.back(); //back() function - returns the last element
    
    cout<<"\nfront = "<<vec.front(); //front() function - returns the first element

    cout<<"\nat = "<<vec.at(2); //at() function - returns the element at specific position

    cout<<"\ncapacity before = "<<vec.capacity(); //capacity() function returns the capacity of vec

    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);

    cout<<"\ncapacity after = "<<vec.capacity(); //fills the remaining capacity

    vec.push_back(9);

    cout<<"\ncapacity finally = "<<vec.capacity(); //if the capacity is overflown --> doubles the size

    return 0;
}