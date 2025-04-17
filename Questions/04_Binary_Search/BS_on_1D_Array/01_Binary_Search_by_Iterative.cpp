#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums, int target)
{
    int n =nums.size();
	int low=0,mid;
	int high=n-1;
	while(low<=high){
       mid=(low+high)/2;
	   if(nums[mid]==target)return mid;
	   else if(nums[mid]<target)low=mid+1;
	   else high=mid-1;
	}
	return -1;

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
    cout<< f(a, k);
    

    return 0;
}