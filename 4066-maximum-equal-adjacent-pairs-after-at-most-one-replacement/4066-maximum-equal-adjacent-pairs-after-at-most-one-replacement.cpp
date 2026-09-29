class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        vector<int> sel = nums;
        int base = 0;
        map<pair<int, int>, int> freq;
        for (int i = 0; i < sel.size() - 1; i++) {
            int a = sel[i];
            int b = sel[i + 1];
            if (a == b) {
                base++;
            }
            else {
                if (a > b)
                    swap(a, b);

                freq[{a, b}]++;
            }
        }
        int maxG = 0;
        for (auto p : freq) {
            maxG = max(maxG, p.second);
        }
        return base + maxG;
    }
};