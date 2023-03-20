class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k = 0 , temp[1000];
        for(int i=0; i<arr.size();) {
            int count = 1;
            int j = i+1;
            for(; j<arr.size(); j++) {
                if(arr[i] == arr[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            temp[k] = count;
            k++;
            i = j;
        }

        for(int i=0; i<k; i++) {
            for(int j=i; j<k; j++) {
                if((temp[i] == temp[j]) && i!=j) {
                    return false;
                }
            }
        }
        return true;
    }
};