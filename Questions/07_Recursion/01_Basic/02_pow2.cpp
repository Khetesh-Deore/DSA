
#include<bits/stdc++.h>
using namespace std;
int power2(int n){
	// Base Case 
	if(n==0)return 1;

return 2*power2(n-1);
}

int main(){
	int n;
	cout<<"Enter N:";
	cin>>n;
	cout<<"2^"<<n<<" :"<<power2(n)<<endl;
	return 0;
}