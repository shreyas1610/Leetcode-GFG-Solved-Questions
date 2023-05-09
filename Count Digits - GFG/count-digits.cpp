//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        //Page 115
        int number = N; // storing input number
        int count = 0;
        while(number != 0)
        {   
            int digit = number % 10; // sorting last digit
            if(digit > 0) // digit must be greater than 0.
            {
            if(N % digit == 0 )
            {
                count++; // counting digit which divisible by N.
            }
            }
            
            number = number / 10; // upgrading digit.
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends