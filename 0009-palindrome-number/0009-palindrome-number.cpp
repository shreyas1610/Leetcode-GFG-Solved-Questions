class Solution {
public:
    bool isPalindrome(int x) {
        //Page 116
        bool pal = true;
        vector<int> ans;
        int b = 0;
        if(x<0){
            return false;
        }
      while(x>0){
          b = x%10;
          ans.push_back(b);
          x = x/10;
        }
        int s =0;
        int e = ans.size()-1;
        while(s<=e){
            if(ans[s]==ans[e]){
                s++;
                e--;
            }else{
                pal = false;
                break;
            }
        }
        
        return pal;
    }
};