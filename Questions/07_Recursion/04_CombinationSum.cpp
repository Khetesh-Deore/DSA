class Solution {
public:
    void dfs(vector<int>& candidates, int target,  int end,
             vector<int>& path, vector<vector<int>>& result, int n) {

        if (target == 0) {
            result.push_back(path);
            return;
        }

        if (target < 0 or target == 1 or end >= candidates.size()) {
            return;
        }

        for (;end < n; end++) {
            path.push_back(candidates[end]);
            dfs(candidates, target - candidates[end], end, path, result, n);
            path.pop_back();
            if(path.size() == 0)
                return;
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        int n = candidates.size();

        for(int i=0; i<n; i++) {
            dfs(candidates, target, i, path, result, n);
        }
            
        return result;
    }
};