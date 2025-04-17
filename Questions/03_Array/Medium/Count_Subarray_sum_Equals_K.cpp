#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &arr, int n, int k)
{
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int presum=0,count=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        int remove=presum-k;
        count+=mpp[remove];
        mpp[presum]++;
    }
  return count;
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

int a = f(arr, n, target);
    cout <<a;

    return 0;
}
