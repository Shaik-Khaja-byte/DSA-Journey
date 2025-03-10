// finding the unique elements in an array

#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {

    cout << "Unique elements in the array are:- ";
    
    for (int i = 0; i < size; i++) {
        bool isUnique = true; // Assume the current element is unique

        // Check if the current element is found in the rest of the array
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false; // Found a duplicate
                break; // No need to check further
            }
        }

        // If isUnique is still true, print the element
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout<<size<<endl;

    printUnique(arr, size);

    return 0;
}
