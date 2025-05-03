#include <iostream>
#include <vector>
using namespace std;

// Shell Sort function
void shellSort(vector<int>& arr) {
    int n = arr.size();

    // Start with a large gap, then reduce the gap
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Do a gapped insertion sort for this gap size
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Shift earlier gap-sorted elements up until the correct location for arr[i] is found
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            // Put temp (the original arr[i]) in its correct location
            arr[j] = temp;
        }
    }
}

// Utility to print the array
void printArray(const vector<int>& arr) {
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

// Example usage
int main() {
    vector<int> arr = {23, 12, 1, 8, 34, 54, 2, 3};
    cout << "Original array: ";
    printArray(arr);

    shellSort(arr);

    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
