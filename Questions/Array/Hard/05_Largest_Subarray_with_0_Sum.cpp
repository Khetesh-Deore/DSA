#include <bits/stdc++.h>
using namespace std;
int f(vector<int> &nums, int n)
{
    unordered_map<int,int>mpp;
	int maxi=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=nums[i];
		if(sum==0){
			maxi=i+1;
		}
		else{
			if(mpp.find(sum)!=mpp.end()){
				maxi=max(maxi,i-mpp[sum]);
			}
			else{
				mpp[sum]=i;
			}
		}
	}
	return maxi;

}

int main()
{
    int n;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
cout<< f(a, n);
    

    return 0;
}