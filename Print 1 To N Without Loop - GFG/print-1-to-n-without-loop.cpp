//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    int cnt = 0;
    void printNos(int n)
    {
        //Your code here
        
        if(n==1){
            
            cnt=1;
            cout<<cnt<<" ";
        }else{
            printNos(n-1);
            cnt++;
            cout<<cnt<<" ";
        }
        
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends