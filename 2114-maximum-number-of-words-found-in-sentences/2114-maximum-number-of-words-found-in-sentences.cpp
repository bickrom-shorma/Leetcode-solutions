class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (const string& s : sentences) {
            int spaces = count(s.begin(), s.end(), ' ');
            maxWords = max(maxWords, spaces + 1);
        }
        return maxWords;
    }
};