// input : chars=['a','a','a','b','b','c','c','c','c']
// output: a3b2c4 char array
#include <bits/stdc++.h>
using namespace std;
int stringCompression(string &str)
{
	int n = str.size();
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		char ch = str[i];
		int cnt = 0;
		while (i < n && str[i] == ch)
		{
			cnt++, i++;
		}
		if (cnt == 1)
			str[index++] = ch;
		else
		{
			str[index++] = ch;
			string s = to_string(cnt);
			for (char digit : s)
			{
				str[index++] = digit;
			}
		}
		i--;
	}
	str.resize(index);
	return index;
}

int main()
{

	string str;
	cout << "Enter the string " << endl;
	getline(cin, str);
	cout << "Output:" << stringCompression(str) << endl;
	cout << str;
}