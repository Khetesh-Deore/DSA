#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
 if(n==0 || n==1)return true;
 if(arr[0]>arr[1])return false;
 else return isSorted(arr+1,n-1);
    
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

    cout << isSorted(arr, n);

    return 0;
}