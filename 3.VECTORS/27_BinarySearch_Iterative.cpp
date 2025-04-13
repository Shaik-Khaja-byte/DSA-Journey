/*
------------------------------------------------------------
Program: Binary Search using Iteration (Vector Version)
------------------------------------------------------------

Description:
This program implements the Binary Search algorithm to find 
the index of a given target element in a **sorted vector**.

Binary Search is an efficient algorithm that repeatedly divides 
the search interval in half. It compares the target value to 
the middle element of the array. If they are not equal, the 
half in which the target cannot lie is eliminated, and the 
search continues on the remaining half.

How it works:
1. Initialize two pointers: `start = 0` and `end = n - 1`.
2. While `start <= end`:
   - Calculate `mid = start + (end - start) / 2`.
   - If `vec[mid] == target`, return `mid`.
   - If `vec[mid] < target`, move `start` to `mid + 1`.
   - If `vec[mid] > target`, move `end` to `mid - 1`.
3. If the loop ends and no match is found, return -1.

Input:
- A sorted vector `vec`
- The size of the vector `n`
- The `target` value to search for

Output:
- Returns the index of the target if found, otherwise -1

Time Complexity:
- Best Case: O(1)    → When the middle element is the target
- Worst Case: O(log n) → When the search goes till the end
- Average Case: O(log n)

Space Complexity:
- O(1) → Constant extra space used (iterative version)

Note:
- The vector must be sorted in ascending order.
- This is an **iterative** implementation. A **recursive** version is also possible.

------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& vec, int n, int target){
    int st = 0, end = n-1;

    while(st <= end){
        int mid = st + (end-st)/2;
        if(target == vec[mid])
        return mid;
        //for 2nd half
        else if(target > vec[mid])
        st = mid + 1;
        //for 1st half
        else
        end = mid - 1;
    }
    return -1;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int n = vec.size();
    int target = 5;
    int index = binarySearch(vec, n, target);
    cout << index << endl;
    return 0;
}