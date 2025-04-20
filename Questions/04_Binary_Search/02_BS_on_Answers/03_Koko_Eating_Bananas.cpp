#include <bits/stdc++.h>
using namespace std;
int calTotalH(vector<int>& piles, int h)
{
	int totalH=0;
	int n=piles.size();
	for(int i=0;i<n;i++){
		totalH+=ceil((double)piles[i]/(double)h);
	}
	return totalH;
}
int minRateToEatBananas(vector<int>& piles, int h){
	int n=piles.size();
	int low=1;
	int high = *max_element(piles.begin(), piles.end());
	
	while(low<=high){
		int mid=(low+high)/2;
		int totalH=calTotalH(piles,mid);
		if(totalH<=h)high=mid-1;
		else low=mid+1;
	}
	return low;
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
	cout<<"Enter the target H:";
	cin>>k;
    cout<< minRateToEatBananas(a, k);
    

    return 0;
}