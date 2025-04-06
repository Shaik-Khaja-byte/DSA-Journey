/*
Selection Sort Algorithm:
-------------------------
* Swap the minimum value in each pass with the current element.

* Assume the first element in an array to be the minimum.
* Start the comparison from index (i+1), as you have already considered the element at index `i` as the minimum.
  - There's no point in comparing it with itself.
* In each pass, find the smallest element in the unsorted portion of the array.
* Swap this minimum element with the first element of the unsorted portion.
* Repeat the process for the next element until the entire array is sorted.

Time Complexity:
----------------
- Best Case: O(n²) (even if the array is sorted, selection sort still checks every element).
- Worst Case: O(n²) (if the array is in reverse order).
- Average Case: O(n²).

Space Complexity:
-----------------
- O(1) as it sorts the array in place without using extra memory.

Selection Sort is **not stable** but is an **in-place sorting algorithm**.
*/

//-------------------------------------------------------------------------------------------------------------

/*
Selection Sort - How Swapping Occurs:
-------------------------------------
* Selection Sort works by repeatedly selecting the minimum element from the unsorted portion 
  and swapping it with the first element of the unsorted portion.
* After each pass, the smallest element is placed at its correct position.

Example:
---------
Initial Array: [5, 3, 8, 4, 2]

Pass 1:
(5 3 8 4 2) → (5 3 8 4 2)  // 5 is assumed to be min
(5 3 8 4 2) → (5 3 8 4 2)  // 3 is smaller, update min
(5 3 8 4 2) → (5 3 8 4 2)  // No update  
(5 3 8 4 2) → (5 3 8 4 2)  // No update  
(5 3 8 4 2) → (5 3 8 4 2)  // 2 is smaller, update min  
Swap (5 and 2) → (2 3 8 4 5)  
=> Smallest element (2) is placed at index 0.

Pass 2:
(2 | 3 8 4 5) → (2 3 8 4 5)  // 3 is min  
(2 3 8 4 5) → (2 3 8 4 5)  // No update  
(2 3 8 4 5) → (2 3 8 4 5)  // No update  
(2 3 8 4 5) → (2 3 8 4 5)  // No update  
Swap (3 and 3) → No change  
=> Second smallest element (3) is placed at index 1.

Pass 3:
(2 3 | 8 4 5) → (2 3 8 4 5)  // 8 is min  
(2 3 8 4 5) → (2 3 8 4 5)  // 4 is smaller, update min  
(2 3 8 4 5) → (2 3 8 4 5)  // No update  
Swap (8 and 4) → (2 3 4 8 5)  
=> Third smallest element (4) is placed at index 2.

Pass 4:
(2 3 4 | 8 5) → (2 3 4 8 5)  // 8 is min  
(2 3 4 8 5) → (2 3 4 8 5)  // 5 is smaller, update min  
Swap (8 and 5) → (2 3 4 5 8)  
=> Fourth smallest element (5) is placed at index 3.

Pass 5:
(2 3 4 5 | 8) → Already sorted, no swaps needed.

Sorted Array: [2, 3, 4, 5, 8]

Observation:
------------
* After each pass, the smallest unsorted element is placed at its correct position.
* Unlike Bubble Sort, Selection Sort **does not stop early** as it always performs n-1 passes.
* Selection Sort **minimizes swaps**, making it useful when swapping is expensive.
* However, it is **not stable** since it may change the order of equal elements.

Selection Sort is **in-place** (does not use extra space) but **not stable**.
*/

//-----------------------------------------------------------------------------------------------

//code

#include<iostream>
#include<vector>
using namespace std;

void Selection_Sort(vector<int>& vec, int n){

     /*
    *Why Does the Outer Loop Run Till n-1?
    *After n-1 passes, the array is fully sorted
    *Since we place one element in its correct position per pass, the last element is automatically sorted.
    */ 

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(vec[j] < vec[min]) min = j;
        }
        swap(vec[i], vec[min]);
    }
}

int main(){
    cout << "enter size : ";
    int n;
    cin>>n;
    vector<int> vec(n);
    cout << "enter elements : ";

    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    Selection_Sort(vec, n);

    cout << "sorted elements : ";

    for(int val: vec){
        cout << val << " ";
    }

    return 0;
}

