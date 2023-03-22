class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ret = 0;
        int consec = 0;

        for (int i=0;i<nums.size();++i) {
            if (nums[i]==0) {
                ++consec;
                ret += consec;
            } else {
                consec = 0;
            }
        }

        return ret;
    }
};