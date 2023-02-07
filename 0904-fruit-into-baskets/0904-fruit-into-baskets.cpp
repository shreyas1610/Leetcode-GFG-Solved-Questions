class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int left=0,right=0;
        int maximum=0;
        for(right;right<n;right++){
            mp[fruits[right]]++;
            //optimizing space;
            while(mp.size()>2){
               
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                    mp.erase(fruits[left]);
                left++;
            }
            maximum=max(maximum,right-left+1);
        }
        return maximum;
    }
};