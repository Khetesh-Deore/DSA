#include <bits/stdc++.h>
using namespace std;
int fun(int mid,int n,int m){
	// return 1 if ==m
	// return 0 if< m
	// return 2 if>m
	long long ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*mid;
		if(ans>m)return 2;

	}
	if(ans==m)return 1;
	return 0;
}
int f( int n,int m)
{
  int low=1;
  int high=m;
  while(low<=high){
        int mid=(low+high)/2;
		int midN=fun(mid,n,m);

		if(midN==1){
			return mid;
		}
		else if(midN==0)low=mid+1;
		else high=mid-1;

  }
  return -1;

}

int main()
{
	int n,m;
	cout << "Enter the N :";
	cin >> n;
	cout << "Enter the M :";
	cin >> m;
	cout << f(n,m);

	return 0;
}