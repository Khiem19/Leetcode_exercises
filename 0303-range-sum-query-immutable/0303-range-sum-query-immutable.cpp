// class NumArray {
// public:
//     vector<int> numArray;
//     NumArray(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             numArray.push_back(nums[i]);
//         }
//     }
    
//     int sumRange(int left, int right) {
//         int sum = 0;
//         for(int i = left; i <= right; i++) {
//             sum += numArray[i];
//         }
//         return sum;
//     }
// };


class NumArray {
public:
    vector<int> memo = {0};
    NumArray(vector<int> &nums) {
        int sum = 0;
        for (int n : nums) {
            sum += n;
            memo.push_back(sum);
        }
    }
    
    // sumRange(2, 4)=prefixSums[5]−prefixSums[2]
    int sumRange(int left, int right) {
        return memo[right+1] - memo[left];
    }
};





/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */