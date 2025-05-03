#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// A utility function to get the maximum value in arr[]
int getMax(const vector<int>& arr) {
    return *max_element(arr.begin(), arr.end());
}

// A function to do counting sort of arr[] according to the digit represented by exp
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n); // output array
    int count[10] = {0};

    // Count occurrences of digits at current place (exp)
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Convert count[] to contain actual positions of digits in output[]
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array (stable sort, so traverse from right)
    for (int i = n - 1; i >= 0; i--) {
        int idx = (arr[i] / exp) % 10;
        output[count[idx] - 1] = arr[i];
        count[idx]--;
    }

    // Copy the output array to arr[]
    arr = output;
}

// Main Radix Sort function
void radixSort(vector<int>& arr) {
    int maxVal = getMax(arr);

    // Apply counting sort for every digit, using exp as 10^i
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
        countingSort(arr, exp);
}

// Utility function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

// Example usage
int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    cout << "Original array: ";
    printArray(arr);

    radixSort(arr);

    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
