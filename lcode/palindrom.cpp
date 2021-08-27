class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size(), mid = 0, firstPos = 0, newLength = 1;
        if(len <= 1) return s;
        for(mid; mid<len;){
            int left = mid;
            int right = mid;
            while(right < len - 1 && s[right+1] == s[right] ) right++;
            mid = right + 1;
            while(right < len - 1 && left > 0 && s[right + 1] == s[left - 1]){
                right++;
                left--;
            }
            int newL = right - left + 1;
            if(newL> newLength){
                firstPos = left;
                newLength = newL;
            }
        }
        return s.substr(firstPos, newLength);
    }
};
