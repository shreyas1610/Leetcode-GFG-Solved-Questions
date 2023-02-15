class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int startingRow = 0;
        int endingCol = col-1;
        int startingCol = 0;
        int endingRow = row-1;
        
        int total = row*col;
        int count = 0;
        
        while(count < total){
            for(int i = startingCol; i<=endingCol && count < total;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            for(int i = startingRow; i<=endingRow && count < total; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            for(int i = endingCol; i>=startingCol && count < total; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            for(int i = endingRow; i>=startingRow && count<total;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
            }
        
        return ans;
    }
};