//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
public:
    int onesComplement(int N){
        //code here
        int m = N;
        int mask = 0;
        if(m==0){
            return 1;
        }
        while(m!=0){
            mask=(mask<<1)|1;
            m = m >> 1;
        }
        int ans = (~N)&mask;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.onesComplement(n)<<"\n";
    }
}
// } Driver Code Ends