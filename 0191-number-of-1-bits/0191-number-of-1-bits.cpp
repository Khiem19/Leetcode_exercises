class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n) {
            count += n & 1; //bit wise automatically access to binary from of int number.!!
            n >>= 1;
        }
        return count;
    }
};