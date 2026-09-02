class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0, digSum = 0;
        
        for (int num : nums) {
            eleSum += num;
            
            int n = num;
            while (n > 0) {
                digSum += n % 10;
                n /= 10;
            }
        }
        
        return abs(eleSum - digSum);
    }
};