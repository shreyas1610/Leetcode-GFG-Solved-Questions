class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        if(n==1)return nums[0];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid>0 && mid+1<n && nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
                return nums[mid];
            if(mid%2==0){
                if(mid+1<n && nums[mid]==nums[mid+1])l=mid+1;  
                else h=mid-1;
            }else{
                if(mid>0 && nums[mid]==nums[mid-1])l=mid+1;
                else h=mid-1;
            }
        }
        return nums[l];
    }
};