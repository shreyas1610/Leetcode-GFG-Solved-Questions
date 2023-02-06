class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start = m;
        int j = 0;
        for(int i = start; i < nums1.size(); i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};