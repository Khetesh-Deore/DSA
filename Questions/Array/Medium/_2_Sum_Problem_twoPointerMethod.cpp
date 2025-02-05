#include <bits/stdc++.h>
using namespace std;
string f(vector<int> &arr, int n, int target)
{
    int left=0,right =n-1;
    sort(arr.begin(),arr.end());
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum ==target)
        {
            return "YES";
        }
        else if(sum<target) left++;
        else right--;

    }
    return "NO";
 
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

    cout<< f(arr, n, target);
   

    return 0;
}
