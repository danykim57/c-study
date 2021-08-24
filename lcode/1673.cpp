class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n = nums.size();
        set<pair<int, int>> pq;
        for (int i=0; i<n-k; i++) {
            pq.insert({nums[i], i});
        }
        int cur = -1;
        vector<int> ret;
        for (int i=n-k; i<n; i++) {
            pq.insert({nums[i], i});
            while(cur >= pq.begin()->second) {
                pq.erase(pq.begin());
            }
            ret.push_back(pq.begin()->first);
            cur = pq.begin()-> second;
            pq.erase(pq.begin());
        }
        return  ret;
    }
};
