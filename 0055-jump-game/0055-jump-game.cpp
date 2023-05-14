class Solution {
public:
    bool canJump(vector<int>& nums) {
        //Page 119
      int n=nums.size();
        bool ans=1;
        int x=n-1;
        for(int index=n-2;index>=0;index--){
            if(index+nums[index]>=x){
                ans=1;
                x=index;
            }
            else{
                ans=0;
            }
        }
        return ans;  
    }
};