class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(const auto& it : s){
            if(it >= 'A' && it <= 'Z')
                t.push_back(it -'A' + 'a');
            else if(it >= 'a' && it <= 'z')
                t.push_back(it);
            else if(it >= '0' && it <= '9')
                t.push_back(it);
        }

        int left = 0;
        int right = t.size() - 1;

        while(left < right) {
            if(t[left] != t[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
};