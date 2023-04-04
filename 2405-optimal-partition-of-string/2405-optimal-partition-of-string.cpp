class Solution {
public:
    int partitionString(string s) {
        //Page 103
        int start = 0; // start pointer of current substring
        int end = 0; // end pointer of current substring
        bool occurred[26] = {false}; // boolean array to keep track of occurred characters
        int count = 0; // count of substrings
        for (end; end < s.size(); end++) {
            if (occurred[s[end] - 'a']) { // if current character has already occurred
                while (start < end) { // remove all characters before duplicate from current substring
                    occurred[s[start] - 'a'] = false;
                    start++;
                }
                count++; // increment count of substrings
            }
            occurred[s[end] - 'a'] = true; // mark current character as occurred
        }
        return count + 1; // return count of substrings + 1
    }
    
};