#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
	// Base Case 
	if(n==0)return 0 ;
	if(n==1)return 1;
    
    return fibo(n-1)+fibo(n-2);
  
}

int main(){
	int n;
	cout<<"Enter N:";
	cin>>n;
	cout<<fibo(n);
	return 0;
}