// swap minimum and maximum values in an array
#include <iostream>
#include <climits>
using namespace std;

void swapMaxMin(int arr[], int size) {

    int smallest = INT_MAX, largest = INT_MIN;
    int Index1 = 0, Index2 = 0;

    // Find the smallest and largest values along with their indices
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            Index1 = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            Index2 = i;
        }
    }

    // Swap the elements at minIndex and maxIndex
    int temp = arr[Index1];
    arr[Index1] = arr[Index2];
    arr[Index2] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    swapMaxMin(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
