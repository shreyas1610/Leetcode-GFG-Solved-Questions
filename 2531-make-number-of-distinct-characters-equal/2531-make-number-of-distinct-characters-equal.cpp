class Solution {
public:
    bool isItPossible(string word1, string word2) {
    map<char, int> mp1;
    map<char, int> mp2;

    // Count the frequency of characters in word1
    for (int i = 0; i < word1.length(); i++) {
        mp1[word1[i]]++;
    }
    
    // Count the frequency of characters in word2
    for (int j = 0; j < word2.length(); j++) {
        mp2[word2[j]]++;
    }
    
    // if (mp1.size() == mp2.size()) {
    //     return true;
    // }

    for (char i = 'a'; i <='z'; i++) {
        for (char j = 'a'; j <='z'; j++) {
            char char1 = i ;
            char char2 = j ;

            if((mp1.find(char1)!=mp1.end()) && (mp2.find(char2)!=mp2.end()) &&  mp1[char1] > 0 && mp2[char2] > 0) {

                // Swap characters
                mp1[char1]--;
                if (mp1[char1] == 0) {
                    mp1.erase(char1);
                }
                mp2[char2]--;
                if (mp2[char2] == 0) {
                    mp2.erase(char2);
                }
                mp1[char2]++;
                mp2[char1]++;

                // Check if the maps are equal now
                if (mp1.size() == mp2.size()) {
                    return true;
                }

                // Revert the swap
                mp1[char2]--;
                if (mp1[char2] == 0) {
                    mp1.erase(char2);
                }
                mp2[char1]--;
                if (mp2[char1] == 0) {
                    mp2.erase(char1);
                }
                mp1[char1]++;
                mp2[char2]++;
            }
        }
    }
    
    return false;
}
};