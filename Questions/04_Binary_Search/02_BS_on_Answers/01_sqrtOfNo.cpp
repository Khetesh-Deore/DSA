#include <bits/stdc++.h>
using namespace std;
int f( int n)
{
  int low =1;
  int high=n;
  while(low<=high){
	long long mid=(low+high)/2;
	long long val=(mid*mid);
	if(val<=n){
		low=mid+1;
	}
	else high =mid-1;
  }	
  return high;
}

int main()
{
	int k;
	cout << "Enter the No. :";
	cin >> k;
	cout << f( k);

	return 0;
}