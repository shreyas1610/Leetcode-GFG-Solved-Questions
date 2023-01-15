class Solution {
public:
    bool isPowerOfTwo(int n) {
    int div = 0;
    while(n>=2 && div!=1){
        div = n%2;
        n = n>>1;
    
    }
    if(div==1 || n<=0){
        return false;
    }else{
        return true;
    }
    }
};