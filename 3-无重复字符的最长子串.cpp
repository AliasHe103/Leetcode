class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int fast = 0, slow = 0;
        int max = 0;
        while (fast < s.size()) {
            if (hash.find(s[fast]) != hash.end()) {
                slow = fmax(slow, hash[s[fast]] + 1);
            }
            hash[s[fast]] = fast;
            max = fmax(max, fast - slow + 1);
            fast++;
        }
        return max;
    }
};