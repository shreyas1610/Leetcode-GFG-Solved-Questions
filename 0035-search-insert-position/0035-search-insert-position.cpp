class Solution {
public:
    int searchInsert(vector<int>& arr, int key) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }

        mid = start + (end - start)/2;
    }
        
        return mid;
    }
};