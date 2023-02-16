class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxi=0,count=0,index=0;
        if(nums.size()==1) 
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){

            if(nums[i]==nums[i+1]){
                count++;
                if(count>maxi){
                    maxi=count;
                    index=nums[i];
                }
            }else{
                if(count>maxi){
                    maxi=count;
                    index=nums[i];
                }
                count=1;
            }

        }
        return index;
    }
};