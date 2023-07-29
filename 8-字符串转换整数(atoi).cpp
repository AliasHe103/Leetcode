class Solution {
public:
    int myAtoi(string s) {
        int sum = 0, sign = 1;
        int i = 0;
        while (s[i] == ' ') i++;
        if (s[i] == '-' || s[i] == '+') sign = s[i] == '+' ? 1 : -1, i++;
        for (; i < s.size() && s[i] >= '0' && s[i] <= '9'; i++) {
            if (sum * 10 + (s[i] - '0') > (pow(2, 31) - 1) / 10) return sign == 1 ? (pow(2, 31) - 1) : (-pow(2, 31));
            sum = sum * 10 + (s[i] - '0');
        }
        return sign * sum;
    }
};