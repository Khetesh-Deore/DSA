#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &arr, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return arr;
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}

int main()
{
    int n, d;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> final = f(arr, n);
    for (int num : final)
    {
        cout << num << " ";
    }

    return 0;
}