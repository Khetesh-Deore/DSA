// 151 on leetcode
#include <bits/stdc++.h>
using namespace std;
string reverseword(string &s)
{
	int n = s.size();
	reverse(s.begin(), s.end());
	string ans="";
	for (int i = 0; i < n; i++)
	{
		string word = "";
		while (s[i] != ' ' && i < n)
		{
			word += s[i];
			i++;
		}
		reverse(word.begin(), word.end());
		if(word.length()>0){ans += " " + word;}
	}
	return ans.substr(1);
}
int main()
{
	string str;
	cout << "INPUT FOR THE WORDS REVERSE IN THE STRING :" << endl;
	getline(cin, str);
	cout << reverseword(str) << endl;
}