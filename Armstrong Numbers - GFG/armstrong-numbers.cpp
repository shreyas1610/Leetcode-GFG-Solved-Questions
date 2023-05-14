//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        //Page 118
        string yes="Yes";
        string no = "No";
        int ans = 0;
        int c = n;
        while(n!=0){
            int digit = n%10;
            ans = ans + (digit*digit*digit);
            n=n/10;
        }
        if(ans==c)
            return yes;
            else
            return no;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends