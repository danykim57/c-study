class Solution {
public:
    int myAtoi(string s) {
        int i = s.find_first_not_of(' ');
    
        if(s.empty() || i == -1) return 0;
    
        int ret = 0;
        int sign = 1;
    
        int base = INT_MAX / 10;
    
        if (s[i] == '+' || s[i] == '-') 
            sign = s[i++] == '+' ?: -1;
    
        while (isdigit(s[i])) {
            if (ret > base || (ret == base && s[i] - '0' > 7)) 
                return sign > 0 ? INT_MAX : INT_MIN;
            ret = 10 * ret + (s[i++] - '0');
        }
    
        return sign * ret;
    }
};
