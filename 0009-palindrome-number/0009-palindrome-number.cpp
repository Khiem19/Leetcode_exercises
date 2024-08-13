class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        std::string ans = std::to_string(x);

        int left = 0;
        int right = ans.size() - 1;

        while (left < right) {
            if (ans[left] != ans[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
