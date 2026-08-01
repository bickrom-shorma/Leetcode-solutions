class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        vector<pair<int, int>> nums2;
        for (int i = 0; i < len; i++) {
            nums2.push_back({nums[i], i});
        }
        sort(nums2.begin(), nums2.end());
        int i = 0, j = len - 1;
        while (i < j) {
            int sum = nums2[i].first + nums2[j].first;

            if (sum == target) {
                return {nums2[i].second, nums2[j].second};
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }

        return {};
    }
};
