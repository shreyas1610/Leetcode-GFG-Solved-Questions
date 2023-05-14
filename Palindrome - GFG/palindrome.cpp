//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int x)
		{
		    // Code here.
		    bool pal = true;
        vector<int> ans;
        int b = 0;
        if(x<0){
            return false;
        }
      while(x>0){
          b = x%10;
          ans.push_back(b);
          x = x/10;
        }
        int s =0;
        int e = ans.size()-1;
        while(s<=e){
            if(ans[s]==ans[e]){
                s++;
                e--;
            }else{
                pal = false;
                break;
            }
        }
        
        string yes = "Yes";
        string no = "No";
        if(pal){
            return yes;
        }else{
            return no;
        }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends