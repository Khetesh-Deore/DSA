#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums, int k)
{
    int xr=0;
	map<int,int>mpp;
	mpp[xr]++; //{0,1}
    int cnt=0;
	for(int i=0;i<nums.size();i++){
		xr=xr^nums[i];
		int x=xr^k;
		cnt+=mpp[x];
		mpp[xr]++;
	}
	return cnt;

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