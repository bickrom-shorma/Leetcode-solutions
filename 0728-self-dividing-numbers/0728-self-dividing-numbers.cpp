class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
    for (int n = left; n <= right; n++) {
        int temp = n;
        bool isSelfDividing = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 0 || n % digit != 0) {
                isSelfDividing = false;
                break;
            }
            temp /= 10;
        }
        if (isSelfDividing) result.push_back(n);
    }
    return result;
    }
};