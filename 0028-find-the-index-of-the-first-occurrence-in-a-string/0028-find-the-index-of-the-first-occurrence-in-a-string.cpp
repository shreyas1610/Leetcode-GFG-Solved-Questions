class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size()) return -1;
        int cnt=0;
        for(int i=0;i<=haystack.size()-needle.size();i++){
            int k=i;
            for(int j=0;j<needle.size();j++){
                if(haystack[k]==needle[j]){
                    cnt++;
                    k++;
                }
                 
                else{
                    
                    cnt=0;
                    break;
                }
               
            }
              if(cnt==needle.size()){
                    return i;
                }
        }
        return -1;
    }
};