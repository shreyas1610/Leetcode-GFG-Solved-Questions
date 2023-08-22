class Solution {
public:
    string convertToTitle(int columnNumber) {
        //Page 193
        string result = "";  
        while (columnNumber > 0) {
            int remainder = (columnNumber - 1) % 26;  
            char letter = 'A' + remainder;  
            result = letter + result;  
            columnNumber = (columnNumber - 1) / 26;
        }
        
        return result; 
    }
};