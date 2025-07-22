#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	void solve(string s, string output, int index, vector<string> &ans)
	{
		// base case
		if (index >= s.size())
		{
			if (s.length() > 0)
			{
				ans.push_back(output);
			}
			return;
		}

		// exclude
		solve(s, output, index + 1, ans);

		// include
		output.push_back(s[index]);
		solve(s, output, index + 1, ans);
	}

	vector<string> subsequence(string s)
	{
		vector<string> ans;
		string output = "";
		int index = 0;
		solve(s, output, index, ans);
		return ans;
	}
};

int main()
{
	string input;
	cout << "Enter a string: ";
	cin >> input;

	Solution obj;
	vector<string> result = obj.subsequence(input);

	cout << "\nAll subsequences are:\n";
	for (const string &subseq : result)
	{
		cout << (subseq.empty() ? "\"\"" : subseq) << "\n";
	}

	return 0;
}
