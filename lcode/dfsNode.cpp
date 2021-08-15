class Solution {
public:
    void dfs(int i, string &labels, vector<vector<int>> &ch, int cnt[], vector<int> &ans){
        if(ans[i] == 0){
            ans[i] = 1;
            for(auto c : ch[i]){
                int cnt1[26] = {};
                dfs(c, labels, ch, cnt1, ans);
                for(auto j = 0; j<26; ++j){
                    cnt[j] += cnt1[j];
                }
            }
            ans[i]  = ++cnt[labels[i] - 'a'];
        }
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int> ans(n);
        int cnt[26] = {};
        vector<vector<int>> ch(n);
        for(auto &it : edges){
            ch[it[0]].push_back(it[1]);
            ch[it[1]].push_back(it[0]);
        }
        dfs(0, labels, ch, cnt, ans);
        return ans;
    }
};
