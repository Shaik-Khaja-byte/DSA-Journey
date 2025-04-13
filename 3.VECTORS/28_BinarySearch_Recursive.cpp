/*
------------------------------------------------------------
Program: Recursive Binary Search (Vector Version)
------------------------------------------------------------

Description:
This program performs **binary search** using a **recursive approach** 
to find the index of a given `target` element in a **sorted vector**.

Binary Search is a divide-and-conquer algorithm. It works by comparing 
the target with the middle element and recursively searching either the 
left or right half of the vector depending on the comparison.

How it works:
1. Start with the full range: `start = 0`, `end = n - 1`.
2. If `start <= end`:
   - Calculate the mid index: `mid = start + (end - start) / 2`.
   - If `vec[mid] == target`, return `mid` (target found).
   - If `target > vec[mid]`, search the right half:
     → recursive call with `start = mid + 1`.
   - If `target < vec[mid]`, search the left half:
     → recursive call with `end = mid - 1`.
3. If `start > end`, return -1 (target not found).

Input:
- A sorted vector `vec`
- Target value to search for
- Start and end indices of the search range

Output:
- Returns the index of the target if found, otherwise -1

Time Complexity:
- Best Case: O(1)       → When the target is at the middle
- Worst Case: O(log n)  → Each step halves the search space
- Average Case: O(log n)

Space Complexity:
- O(log n) → Due to recursive call stack (height of recursion tree)

Note:
- The vector must be sorted in **ascending order**.
- This is a **recursive** implementation. An **iterative** version is also available.

------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& vec, int target, int st, int end){

    if(st <= end){

    int mid = st + (end-st)/2;

        if(target == vec[mid])
        return mid;

        //for 2nd half
        else if(target > vec[mid])
        return binarySearch(vec, target, mid+1, end);

        //for 1st half
        else
        return binarySearch(vec, target, st, mid-1);
        
    }

    return -1;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int n = vec.size();
    int target = 9;
    int index = binarySearch(vec, target, 0, n-1);
    cout << index << endl;
    return 0;
}