class Solution {
public:
     bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) 
            return false;
        int n = nums.size();
        vector <int> Min(n);
        stack <int> st;
        Min[0]=nums[0];
        for(int i=1;i<n;i++)
            Min[i]= min(Min[i-1],nums[i]);
        for(int j=n-1;j>0;j--)
        {
            if(nums[j]== Min[j]) continue;
            
            while(!st.empty() && st.top()<=Min[j])
                st.pop();
            if (!st.empty() && st.top()< nums[j])
                 return true;
            st.push(nums[j]);
        }
        return false;
    }
};