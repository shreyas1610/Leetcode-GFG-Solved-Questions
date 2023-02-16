class Solution {
public:
    void sortColors(vector<int>& arr) {
        for(int i = 01; i <arr.size();i++){
        for(int j = 0;j<arr.size()-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    }
};