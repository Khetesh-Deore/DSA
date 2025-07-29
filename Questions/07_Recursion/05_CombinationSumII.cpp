class Solution {
public:
    void solve(vector<int>& candidates, int target, int index,
               vector<vector<int>>& ans, vector<int> output) {
        if (target == 0) {
            ans.push_back(output);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[i] > target)
                break;
            output.push_back(candidates[i]);
            solve(candidates, target - candidates[i], i + 1, ans, output);
            output.pop_back(); // backtrack
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(candidates.begin(), candidates.end());
        solve(candidates, target, 0, ans, output);
        return ans;
    }
};