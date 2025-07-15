// 567 leetcode
// s1='ab' s2='eidbaoooo' s1 cha kontahi permutation exist karto ka string s2 madhe
#include <bits/stdc++.h>
using namespace std;
bool issamefreq(int freqofs1[26], int freqofs2[26])
{
	for (int i = 0; i < 26; i++)
	{
		if (freqofs1[i] != freqofs2[i])
			return false;
	}
	return true;
}
bool permutationInString(string s1, string s2)
{
	int freqofs1[26] = {0};
	for (int i = 0; i < s1.length(); i++)
		freqofs1[s1[i] - 'a']++;
	int windowsize = s1.length();

	for (int i = 0; i < s2.length(); i++)
	{
		int freqofs2[26] = {0};
		int index = i;
		int windowindex = 0;
		while (windowindex < windowsize && index < s2.length())
		{
			freqofs2[s2[index] - 'a']++;
			windowindex++;
			index++;
		}
		if (issamefreq(freqofs1, freqofs2))
			return true;
	}
	return false;
}
int main()
{
	string str1, str2;
	cout << "Input s1:" << endl;
	getline(cin, str1);
	cout << "Input s2:" << endl;
	getline(cin, str2);
	cout << permutationInString(str1, str2) << endl;
}