#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i<=n; i++)
    {    int  j=i;
        
        while( j>0 && arr[j-1]>arr[j])
        {
            
                int temp = arr[j-1];
                arr[j-1] = arr[j ];
                arr[j ] = temp;
                j--;
            
        }
        
    }
}
int main()
{
    int n;
    cout << "Enter the NO. of Element : ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of Array :";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubble_sort(arr, n);
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}