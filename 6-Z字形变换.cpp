class Solution {
public:
    string convert(string s, int numRows) {
        int size = s.size();
        int row = numRows;
        if (row == 1 || row >= size)  return s;
        vector<string> set(row);
        for (int i = 0, x = 0, t = 2 * row - 2; i < size; i++) {
            set[x] += s[i];
            i% t < row - 1 ? ++x : --x;
        }
        string ans;
        for (auto row : set) {
            ans += row;
        }
        return ans;
    }
};