
#include <bits/stdc++.h>
using namespace std;
int FindDays(vector<int> weight,int cap){
	int days=1,load=0;
	for(int i=0; i<weight.size();i++){
		if(weight[i]+load>cap){
			days+=1;
			load=weight[i];

		}
		else load+=weight[i];
	}
	return days;
}

int shipWithinDays(vector<int>& weights, int days) {
      int low=*max_element(weights.begin(),weights.end()) ;
	  int high=accumulate(weights.begin(),weights.end(),0) ;
	  while(low<=high){
		int mid=low+((high-low)/2);
		int noOfDays=FindDays(weights,mid);
		if(noOfDays<=days){
			high=mid-1;
		}
		else low=mid+1;
	  }
	  return low;
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
	cout<<"Enter the Days :";
	cin>>m;
	
    cout<< shipWithinDays(a,m);
    

    return 0;
}