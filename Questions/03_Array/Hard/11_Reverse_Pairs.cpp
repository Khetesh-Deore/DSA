#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;      
    int right = mid + 1;

    

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
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

    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

int countPairs(vector<int> &arr, int low, int mid, int high) {
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) {
        while (right <= high && arr[i] > 2 * arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  
    cnt += mergeSort(arr, mid + 1, high); 
    cnt += countPairs(arr, low, mid, high); 
    merge(arr, low, mid, high);  
    return cnt;
}
int f(vector<int> &nums,int n)
{
	return mergeSort(nums, 0, n - 1);

}

int main()
{
    int n;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	
    cout<< f(a,n);
    

    return 0;
}