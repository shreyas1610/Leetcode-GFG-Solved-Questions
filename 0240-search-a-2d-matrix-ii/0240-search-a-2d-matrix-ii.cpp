class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int ri = 0;
        int ci = col-01;
        while(ci>=0 && ri < row){
            int element = matrix[ri][ci];
            if(target==element)
                return 1;
            if(target>element)
                ri++;
            else
                ci--;
        }
        
        
        return 0;
        
    }
};