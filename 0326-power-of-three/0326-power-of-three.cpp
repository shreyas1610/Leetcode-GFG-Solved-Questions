class Solution {
public:
    int n;
    bool check(int n){
        if(n>0 && n%3==0){
            n=n/3;
            return check(n);
        }else
            return n==1;
    }
    bool isPowerOfThree(int x) {
        n=x;
        return check(n);
    }
};