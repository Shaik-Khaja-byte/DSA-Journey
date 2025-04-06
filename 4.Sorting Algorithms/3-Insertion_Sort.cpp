/*
Insertion Sort Algorithm:
-------------------------
* Consider the first element as sorted.
* Pick the next element and compare it with the sorted part.
* Shift the elements of the sorted part to the right if they are greater than the current element.
* Insert the current element in its correct position.
* Repeat the process for all elements until the entire array is sorted.

How Swapping Occurs:
--------------------
* Elements are shifted to the right until the correct position for the current element is found.
* Unlike selection or bubble sort, swapping happens **only when necessary**.
* At the end of each iteration, the left portion of the array remains sorted.

Example:
---------
Initial: [5, 3, 4, 1, 2]

Iteration 1: [3, 5, 4, 1, 2]  // 3 is inserted before 5  
Iteration 2: [3, 4, 5, 1, 2]  // 4 is inserted before 5  
Iteration 3: [1, 3, 4, 5, 2]  // 1 is inserted at the beginning  
Iteration 4: [1, 2, 3, 4, 5]  // 2 is inserted at the correct position  

Time Complexity:
----------------
- Best Case: O(n) (if the array is already sorted, it makes **only n comparisons**).
- Worst Case: O(n²) (if the array is in reverse order, every element is compared and shifted).
- Average Case: O(n²).

Space Complexity:
-----------------
- O(1) as it sorts the array in place without using extra memory.

Insertion Sort is **stable** and an **in-place sorting algorithm**.
*/
//-------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

void Insertion_Sort(vector<int>& vec, int n){
    for(int i=1; i<n; i++){
        int j = i;
        while(j>0 && vec[j-1] > vec[j]){
            swap(vec[j-1], vec[j]);
            j--;
            cout << "runs" << endl;
        }
    }
}

int main(){
    int n;
    cout << "enter size : ";
    cin >> n;
    vector<int> vec(n);
    cout << "enter elements : ";
    for(int i=0;  i<n; i++){
        cin >> vec[i];
    }

    Insertion_Sort(vec, n);

    for(int val: vec){
        cout << val << " ";
    }

    return 0;
}