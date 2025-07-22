#include <bits/stdc++.h>
using namespace std;
int pow(int n, int m)
{
	if (m == 0)
		return 1;
	if (m % 2 == 0)
		return pow(n, m / 2) * pow(n, m / 2);
	else
		return n * pow(n, (m - 1) / 2) * pow(n, (m - 1) / 2);
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << "Power:" << pow(n, m);
}