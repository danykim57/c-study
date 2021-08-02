class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int a[60] = {};
        for(int i=0; i<s.length();i++){
            a[s[i] - 65] = a[s[i] - 65] + 1; 
        }
        int cnt = a[s[0] - 65];
        for(int i=0; i<60; i++){
            if(a[i] != 0 && a[i] != cnt) return false;
        }
        return true;
    }
};
