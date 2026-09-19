class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        for (int i = 0; i < words.size(); i++) {
            bool ok = true;
            for (int j = 0; j < words[i].size(); j++) {
                if (allowed.find(words[i][j]) == string::npos) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                ans++;
            }
        }
        return ans;
    }
};