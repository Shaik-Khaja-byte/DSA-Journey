// Explicit conversion as a programer you can forcefully convert one data type to another
// usually big ---> small datatype
#include<iostream>
using namespace std;
int main(){
    float Price = 100.99;
    int newPrice = (int)Price;
    cout<<newPrice;
    return 0;
}
// 100.001 or 100.999 both are casted to 100 only!