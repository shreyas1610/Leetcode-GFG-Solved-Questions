class Solution {
public:
    string removeOuterParentheses(string st) {
        int ans = 0;
        int s = 0;
        int e = st.length()-1;
        string d = "";
        //int pos=0;
        while(s<e){
            if(st[s]=='(' && ans==0){
                ans++;
                s++;
            }
            if(st[s]=='(' && ans>0){
                ans++;
                d+=st[s++];
            }
            if(st[s]==')' && ans>1){
                d+=st[s++];
                ans--;
            }
            if(st[s]==')' && ans==1){
                s++;
                ans=0;
            }
        }
        return d;
    }
};