class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        //Page 106
        int minB = -1, maxB = -1, badB=-1;
        long long cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]<minK || maxK<nums[i]){
                badB = i;
            }
            if(nums[i]==minK)
                minB=i;
            if(nums[i]==maxK)
                maxB=i;
            cnt += max(0,min(minB, maxB)-badB);
        }
        return cnt;
    }
};