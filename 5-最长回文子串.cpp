class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int end = 0, max = 0;
        for (int i = 0; i < n; i++) {
            int l = i - 1, r = i;
            for (; l >= 0 && r < n && s[l] == s[r]; l--, r++);
            if (max < r - l - 1) {
                end = l + 1;
                max = r - l - 1;
            }

            l = i - 1, r = i + 1;
            for (; l >= 0 && r < n && s[l] == s[r]; l--, r++);
            if (max < r - l - 1) {
                end = l + 1;
                max = r - l - 1;
            }
        }
        return s.substr(end, max);
    }
};