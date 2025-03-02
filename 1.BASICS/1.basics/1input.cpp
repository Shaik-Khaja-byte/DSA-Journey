#include<iostream>
using namespace std;
void name(){
    int age;
    cout << "Please enter your age: ";  // Add a prompt
    cin >> age;
    cout << "The age is " << age << endl;
}
int main(){
    name();
    return 0;
}
