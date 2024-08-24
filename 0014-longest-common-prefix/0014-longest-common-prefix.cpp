class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }

        sort(strs.begin(), strs.end());

        string first = strs.front();
        string last = strs.back();

        int minLength = min(first.size(), last.size());
        string ans;
        for(int i = 0; i < minLength; i++) {
            if(first[i] == last[i]) {
                ans += first[i];
            } else break;
        }
        return ans;
    }
};