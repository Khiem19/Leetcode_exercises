class Solution {
public:
    bool isPalindrome(string s) {
        for(auto& it : s) {
            it = tolower(it);
        }

        // Remove non-alphanumeric characters
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);  // Check if character is not alphanumeric
        }), s.end());

        if(s.empty()) {
            return true;
        }
        string reversed = s;
        reverse(s.begin(), s.end());
        
        return s == reversed;
    }
};