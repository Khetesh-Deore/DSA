#include <bits/stdc++.h>
using namespace std;
bool binarysearch(vector<int> &nums, int target,int low,int high)
{
	if(low>high)return false;
       int mid=(low+high)/2;
	   if(nums[mid]==target)return true;
	   else if(nums[mid]<target)return binarysearch(nums,target,mid+1,high);
	   else return binarysearch(nums,target,low,mid-1);
	

}

int main()
{
    int n,k;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	cout<<"Enter the target K:";
	cin>>k;
    cout<< binarysearch(a, k,0,n-1);
    

    return 0;
}