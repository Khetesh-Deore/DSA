#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &arr, int n, int target)
{
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num;
        if(mpp.find(moreNeeded)!=mpp.end())
        {
            return{mpp[moreNeeded],i};
        }
        mpp[num]=i;


    }return {-1,-1};
}

int main()
{
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the Target :";
    cin >> target;

    vector<int> a = f(arr, n, target);
    cout << "[" << a[0] << "," << a[1] << "]";

    return 0;
}
