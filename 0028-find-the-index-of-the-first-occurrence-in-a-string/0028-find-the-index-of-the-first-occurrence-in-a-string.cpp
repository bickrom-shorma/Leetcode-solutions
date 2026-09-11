class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m > n) return -1;

        for (int start = 0; start <= n - m; start++) {
            int i = 0;

            while (i < m && haystack[start + i] == needle[i]) {
                i++;
            }

            if (i == m) {
                return start;
            }
        }

        return -1;
    }
};