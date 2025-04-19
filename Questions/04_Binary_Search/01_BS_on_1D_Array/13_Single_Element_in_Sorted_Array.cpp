#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums)
{
	int n=nums.size();
	if(n==1)return nums[0];
	if(nums[0]!=nums[1])return nums[0];
	if(nums[n-1]!=nums[n-2])return nums[n-1];
	int low=1;
	int high=n-2;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(nums[mid]!=nums[mid-1] &&nums[mid]!=nums[mid+1] )return nums[mid];
		// we are in left
		if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1]))low=mid+1;
		// we are on right
		else high=mid-1;
	}
        return -1;
}

int main()
{
	int n, k;
	cout << "Enter the number of elements A: ";
	cin >> n;
	vector<int> a(n);
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	cout << f(a);

	return 0;
}