class Solution {
public:
    int fib(int n) {
    int a = 0;
    int b = 1;
    //cout<<a<<" "<<b<<" ";
    if(n==0){
        return 0;
    }
        if(n==1){
        return 1;
    }
    int nextNum;
    for(int i=1;i<n;i++){
        nextNum = a+b;
        //cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
     return nextNum;   
    }
};