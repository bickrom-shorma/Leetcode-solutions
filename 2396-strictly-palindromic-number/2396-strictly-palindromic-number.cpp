class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int b = 2; b <= n - 2; b++) {
            string s;
            int x = n;
            while (x > 0) {
                s += char('0' + x % b);
                x /= b;
            }
            string r = s;
            reverse(r.begin(), r.end());
            if (s != r) return false;
        }
        return true;
    }
};