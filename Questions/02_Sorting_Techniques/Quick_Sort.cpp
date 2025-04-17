#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;
            return j;

}

void Quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = f(arr, low, high);
        Quick_sort(arr, low, partition - 1);
        Quick_sort(arr, partition + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

     int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Quick_sort(arr, 0, n - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
