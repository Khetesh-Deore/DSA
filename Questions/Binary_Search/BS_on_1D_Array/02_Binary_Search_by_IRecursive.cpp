// log n base 2
#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums,int low ,int high,int target)
{
       if(low>high)return -1;
       int mid=(low+high)/2;
	   if(nums[mid]==target)return mid;
	   else if(nums[mid]<target)return f(nums,mid+1,high,target);
	    return f(nums,low,mid-1,target);
	
	

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
    cout<< f(a,0,n-1,k);
    

    return 0;
}
