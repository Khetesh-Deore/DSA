#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
        int nz = temp.size();
        for (int i = 0; i < nz; i++)
        {
            arr[i] = temp[i];
        }
        for (int i = nz; i < n; i++)
        {
            arr[i] = 0;
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