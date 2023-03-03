class Solution {

private:
    void solve(vector<int> nums,vector<vector<int>>& ans,int index){
    //base
        if(index>=nums.size()){
            ans.push_back(nums);
            
            return ;
        }
        
        
        //rec
        for(int j = index; j<nums.size(); j++){
            swap(nums[index],nums[j]);
            solve(nums, ans, index+1);
            //backtarck
            swap(nums[index],nums[j]);//will work without this statement also
        }
    
    
    }    
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};