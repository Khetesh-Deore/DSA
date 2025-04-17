#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int n)
{
    int largest = arr[0];
    int slargest=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {   slargest =largest;
            largest = arr[i];

        }
        else if (arr[i] > slargest && arr[i] != largest) 
        {
            slargest= arr[i];
        }
    }
    return slargest;
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