class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i = 0; i<nums1.size();i++){
		int element = nums1[i];
		for(int j = 0; j<nums2.size();j++){
			if(element==nums2[j]){
				ans.push_back(element);
				nums2[j]=-515;
				break;
			}
		}
	}

	return ans;
    }
};