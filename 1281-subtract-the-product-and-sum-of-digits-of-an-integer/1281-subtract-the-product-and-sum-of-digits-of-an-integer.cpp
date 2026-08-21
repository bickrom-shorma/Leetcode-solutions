class Solution {
public:
    int subtractProductAndSum(int n) {
        int p_sum = 1, s_sum = 0;

        while (n > 0) {
            int a = n % 10;
            p_sum *= a;
            s_sum += a;
            n = n / 10;
        }

        return p_sum - s_sum;
    }
};