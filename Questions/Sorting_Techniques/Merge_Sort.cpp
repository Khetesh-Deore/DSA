#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    // [low...mid], [mid+1...high]
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copying sorted values back to the original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void Merge_sort(vector<int>& arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;

    Merge_sort(arr, low, mid);
    Merge_sort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    Merge_sort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
