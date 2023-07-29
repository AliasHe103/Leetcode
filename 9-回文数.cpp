class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        else if (x < 10) return true;
        else {
            int sum = 0, x0 = x, maxint = pow(2, 31) - 1;
            while (x0) {
                int x1 = x0 % 10;
                sum = sum * 10 + x1;
                if (x == sum) return true;
                if (sum > maxint / 10) return false;
                x0 /= 10;
            }
        }
        return false;
    }
};