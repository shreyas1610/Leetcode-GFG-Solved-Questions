class Solution {
     
public:
    int count(vector<int> &potions, int &spell, long long &target)
    {
        int n = potions.size();
        int low = 0;
        int high = n-1;
        int bestIndex=n;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            long long product = (long long)spell*potions[mid];
            if(product >= target)
            {
                bestIndex = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return (n-bestIndex);
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //Page 104
        int n = spells.size();
        sort(potions.begin(), potions.end());
        vector<int> ans(n);
        for(int i=0 ; i<n ;i++)
        {
            ans[i] = count(potions,spells[i],success);
        }
        return ans;
    }
};