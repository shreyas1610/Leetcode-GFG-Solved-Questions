//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


int firstOcc(vector<int>& arr, int n, int k){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start+ (end-start)/2;
    while(start<=end){
        if(arr[mid]>k){
            end = mid - 1;
        }
        else if(arr[mid]<k){
            start = mid + 1;
        }
        else if(arr[mid]==k){
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int lastOcc(vector<int>& arr, int n, int k){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]>k){
            end = mid - 1;
        }
        else if(arr[mid]<k){
            start = mid + 1;
        }
        else if(arr[mid]==k){
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

vector<int> find(int arr[], int n , int k )
{
    // code here
    vector<int> p;
    vector<int> arr1;
    for(int i = 0; i<n;i++){
        arr1.push_back(arr[i]);
    }
    int a = firstOcc(arr1, n , k);
    int b = lastOcc(arr1, n, k);
     p.push_back(a);
        p.push_back(b);
        
        
    return p;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends