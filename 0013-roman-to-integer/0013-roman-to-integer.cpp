class Solution {
public:
    int romanToInt(string s) {
        //Page 108
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            switch (s.at(i)){
                case 'I':
                    if(i < s.length()-1 && s.at(i+1)=='V'){
                        ans += 4;
                        i++;
                        break;
                    }
                    if(i < s.length()-1 && s.at(i+1)=='X'){
                        ans += 9;
                        i++;
                        break;
                    }
                    ans += 1;
                    break;
                case 'V':
                    ans += 5;
                    break;
                case 'X':
                    if(i < s.length()-1 && s.at(i+1)=='L'){
                        ans += 40;
                        i++;
                        break;
                    }
                    if(i < s.length()-1 && s.at(i+1) == 'C'){
                        ans += 90;
                        i++;
                        break;
                    }
                    ans += 10;
                    break;
                case 'L':
                    ans += 50;
                    break;
                case 'C':
                    if(i < s.length()-1 && s.at(i+1)=='D'){
                        ans += 400;
                        i++;
                        break;
                    }
                    if(i < s.length()-1 && s.at(i+1)=='M'){
                        ans += 900;
                        i++;
                        break;
                    }                    
                    ans += 100;
                    break;
                case 'D':
                    ans += 500;
                    break;
                case 'M':
                    ans += 1000;
                    break;
                default:
                    ans += 0;
            }
        }
        
        return ans;       
    }
};