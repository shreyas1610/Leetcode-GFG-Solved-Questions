class Solution {
public:
    int maxVowels(string s, int k) {
        //Page 114
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int cnt = 0;
        for(int i = 0; i<k;i++){
            if(vowels.find(s[i]) != vowels.end())
                cnt++;
        }
        
        int l = 0, r=k-1;
        int mvc = cnt;
        while(r<s.length()-1){
            if(vowels.find(s[l])!=vowels.end()) cnt--;
            l++;
            r++;
            if(vowels.find(s[r]) !=vowels.end()) cnt++;
            mvc = max(mvc, cnt);
        }
        return mvc;
        
        
    }
};