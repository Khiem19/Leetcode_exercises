class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;

        while (n % 3 == 0) { // while !!!!!!!! not if
            n /= 3;
        }

        return n == 1; //true if n == 1
    }
};