class Solution {
public:
    int reverse(int x) {
        if (x > 2147483647 || x < -2147483647) return 0;
        int sig = (x > 0) ? 1 : -1;
        int fx = abs(x);
        int sum = 0;
        while (fx) {
            if (sum > 214748364) return 0;
            sum = sum * 10 + fx % 10;
            fx = fx / 10;
        }
        return sum * sig;
    }
};
