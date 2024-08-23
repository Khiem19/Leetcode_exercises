class Solution {
public:
    map<char,int> countChar(const string& s) {
        map<char, int> charCount;
        for(int i = 0; i < s.size(); i++) {
            if(charCount.find(s[i]) != charCount.end()) {
                charCount[s[i]]++;
            } else {
                charCount.insert(pair<char,int>(s[i],1));
            }
            
        }
        return charCount;
    }

    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        map<char,int> count1 = countChar(s);
        map<char,int> count2 = countChar(t); 

        return count1 == count2;
    }
};