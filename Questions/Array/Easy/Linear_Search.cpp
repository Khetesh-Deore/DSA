#include <bits/stdc++.h>
using namespace std;
int f(int arr[], int n, int num)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, num;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "ENte the No. for search :";
    cin >> num;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << f(arr, n, num);

    return 0;
}