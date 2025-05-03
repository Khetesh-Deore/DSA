
#include <bits/stdc++.h>
using namespace std;
bool canWePlace(vector<int>&stalls ,int dist, int cows){
	int cntcows=1;
	int last =stalls[0];
	for(int i=1;i<stalls.size();i++){
		if(stalls[i]-last>=dist){
			cntcows++;
			last=stalls[i];
		}
		if(cntcows>=cows)return true;
	}
	return false;
}
int aggressiveCows(vector<int>&stalls,int k){
	sort(stalls.begin(),stalls.end());
	int n= stalls.size();
	int low =1;
	int high=stalls[n-1]-stalls[0];
	while(low<=high){
		int mid =(low+high)/2;
		if(canWePlace(stalls,mid,k)==true)low=mid+1;
		else high=mid-1;
	}
	return high;
}
int main()
{
    int n,k,m;
    cout << "Enter the number of elements A: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
	cout<<"Enter the cows. :";
	cin>>m;
	
    cout<< aggressiveCows(a,m);
    

    return 0;
}