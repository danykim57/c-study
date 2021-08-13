class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ch;
        int i=0;
        for(string s: strs){
            sort(s.begin(), s.end());
            ch[s].push_back(strs[i++]);
        }
        for(auto c : ch){
            ans.push_back(c.second);
        }
        return ans;
    }
};
