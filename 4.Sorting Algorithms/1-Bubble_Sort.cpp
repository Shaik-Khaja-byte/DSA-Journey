/*
Bubble Sort Algorithm:
----------------------
* Compare adjacent elements and swap them if they are in the wrong order.
* After each pass, the largest element in the unsorted portion moves to its correct position (bubbles up).
* The outer loop runs (n-1) times because after (n-1) passes, the array is fully sorted.
* The inner loop runs (n-1-i) times in each pass to avoid unnecessary comparisons with already sorted elements.
* If no swaps occur in a pass, the array is already sorted, and sorting can be terminated early.

Time Complexity:
----------------
- Best Case: O(n) (when the array is already sorted and an optimization is used).
- Worst Case: O(n²) (when the array is in reverse order).
- Average Case: O(n²).

Space Complexity:
-----------------
- O(1) as it sorts the array in place without using extra memory.

Bubble Sort is **stable** and **in-place**, but inefficient for large datasets.
*/

//--------------------------------------------------------------------------------------------------------

/*
Bubble Sort - How Swapping Occurs:
-----------------------------------
* Bubble Sort works by repeatedly swapping adjacent elements if they are in the wrong order.
* In each pass, the largest element in the unsorted portion moves to its correct position at the end.

Example:
---------
Initial Array: [5, 3, 8, 4, 2]

Pass 1:
(5 3 8 4 2) → (3 5 8 4 2)  // Swap 5 and 3  
(3 5 8 4 2) → (3 5 8 4 2)  // No swap  
(3 5 8 4 2) → (3 5 4 8 2)  // Swap 8 and 4  
(3 5 4 8 2) → (3 5 4 2 8)  // Swap 8 and 2  
=> Largest element (8) is now at the end.

Pass 2:
(3 5 4 2 | 8) → (3 5 4 2 8)  // No swap  
(3 5 4 2 8) → (3 4 5 2 8)  // Swap 5 and 4  
(3 4 5 2 8) → (3 4 2 5 8)  // Swap 5 and 2  
=> Second largest element (5) is now at its correct position.

Pass 3:
(3 4 2 | 5 8) → (3 4 2 5 8)  // No swap  
(3 4 2 5 8) → (3 2 4 5 8)  // Swap 4 and 2  
=> Third largest element (4) is now at its correct position.

Pass 4:
(3 2 | 4 5 8) → (2 3 4 5 8)  // Swap 3 and 2  

Sorted Array: [2, 3, 4, 5, 8]

Observation:
------------
* After each pass, the largest unsorted element is placed at its correct position.
* The number of comparisons decreases after every pass as the largest elements are already sorted.
* The algorithm stops early if no swaps occur in a pass (optimized version).

Bubble Sort is **stable** (it preserves the order of duplicate elements) and **in-place** (it does not use extra space).
*/

//----------------------------------------------------------------------------------------------------------------------

//code
#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int>& vec, int n){
    for(int i=0; i<n-1; i++){
        int didSwap = 0;
        for(int j=0; j<n-1-i; j++){
            if(vec[j] > vec[j+1]){
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        break;
        cout << "runs" << endl;
    }
}

int main(){
    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> vec(n);
    cout << "enter elements : ";

    for(int i=0; i<n; i++){
        cin >> vec[i];
    }

    bubble_sort(vec, n);

    cout << "sorted array : ";

    for(int val: vec){
        cout << val << " ";
    }

    return 0;
}