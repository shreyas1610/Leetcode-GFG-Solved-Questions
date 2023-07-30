class Solution {
public:
    //Page 180
    string MergeString(string s, string t){
        int idx = -1;
        for(int i=0;i<s.size();i++){
            int left = i, right = 0;
            while(left < s.size() and right < t.size()){
                if(s[left] == t[right]){
                    left++;
                    right++;
                }
                else{
                    break;
                }
            }
            if(left == s.size()){
                idx = right;
                break;
            }
            if(right == t.size()) return s;
        }
        if(idx == -1) return s+t;
        string str = s;
        for(int i=idx;i<t.size();i++){
            str.push_back(t[i]);
        }
        return str;
        
    }
    string f(string a, string b, string c){
        string finalstr = "";
        finalstr = MergeString(a, b);
        finalstr = MergeString(finalstr,c);
        return finalstr;
    }
    string minimumString(string a, string b, string c) {
        vector<string> strs = {f(a,b,c), f(a,c,b), f(b,a,c), f(b,c,a), f(c,b,a), f(c,a,b)};
        int size = 301;
        string answer = "";
        for(auto str : strs){
            if(str.size() < size){
                answer = str;
                size = answer.size();
            }
            else if(str.size() == size){
                answer = min(answer, str);
            }
        }
        return answer;
    }
};