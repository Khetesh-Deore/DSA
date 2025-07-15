// leetcode  1910
#include <bits/stdc++.h>
using namespace std;
string removeAllOccurance(string s,string part)
{
	while(s.length()>0 && s.find(part)<s.length()){
		s.erase(s.find(part),part.length());
	}
	return s;
}
int main()
{
	string str,part;
	cout << "Inter the string:" << endl;
	getline(cin, str);
	cout << "Inter the part:" << endl;
	getline(cin, part);
	cout << removeAllOccurance(str,part);
}