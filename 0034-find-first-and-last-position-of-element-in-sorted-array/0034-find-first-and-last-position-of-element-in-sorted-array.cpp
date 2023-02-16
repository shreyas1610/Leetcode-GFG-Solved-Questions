class Solution {
    private:
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
public:
    vector<int> searchRange(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> p;
    int a = firstOcc(arr, n , k);
    int b = lastOcc(arr, n, k);
     p.push_back(a);
        p.push_back(b);
        
        
    return p;
    }
};