// implicit conversion by compiler
// from small datatype ---> large datatype easily
// we have done nothing just assigned the value to another

#include<iostream>
using namespace std;
int main(){
    char grade = '0'; //'A' is stored in grade
    char grad='a';
    float gra=3.14;

    int value = grade; // grade is stored in value
    int valu=grad;  /*  ASCII vaue is printed    */
    double val=gra;        

    cout<<value<<" and "<<valu<<" and "<<val<<endl; 

    cout<<"the size after float ---> double is:- "<<sizeof(val)<<"\n";

    return 0;
}