class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        
        int n=maxi+1;
        
        vector<int> temp(n,0);
        
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
            
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>1) ans.push_back(i);
        }
        return ans;
    }
};