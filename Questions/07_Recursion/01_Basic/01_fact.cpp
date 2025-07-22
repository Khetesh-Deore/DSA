#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
	// Base case
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(){
	int n;
	cout<<"Enter N:";
	cin>>n;
	cout<<"Factorial :"<<factorial(n)<<endl;
	return 0;
}