#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {   ssmallest =smallest;
            smallest = arr[i];

        }
        else if (arr[i]!= smallest && arr[i]<ssmallest)
        {
            ssmallest=arr[i];
        }
    }
    return ssmallest;
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

    cout << f(arr, n);

    return 0;
}