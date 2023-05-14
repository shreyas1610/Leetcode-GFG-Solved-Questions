class Solution {
public:
    bool checkPerfectNumber(int num) {
        //Page 119
        vector<int> ans;
        for(int i = 1;i*i<=num;i++){
            if(num%i==0){
                ans.push_back(i);
                if((num/i)!=i){
                    ans.push_back(num/i);
                }
            }
        }
        sort(ans.begin(), ans.end());
        int ans1 = 0;
        for(auto it:ans) ans1 = ans1+it;
        
        if((ans1-num)==num)
            return true;
        else
            return false;
        
    }
};