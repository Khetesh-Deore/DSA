#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums, int x)
{
    int n =nums.size();
	int ans=n;
	int low=0,mid;
	int high=n-1;
	while(low<=high){
       mid=(low+high)/2;
	   if(nums[mid]>x){
		ans=mid;
		// look for more small index on left
		high=mid-1;
	   }
	   else{
		low=mid+1; // look for right
	   }
	  
	}
	return ans;

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