class Solution {
    //Page 152
private:
vector<int> nextSmall(vector<int> matrix) {
    stack<int> k;
    k.push(-1);
    int n = matrix.size();
    vector<int> ans(n);
    for(int i = n-1; i >= 0; i-- ) {
        int num = matrix[i];
        while(k.top() != -1 && matrix[k.top()] >= num ) {
            k.pop();
        }
        ans[i] = k.top();
        k.push(i);
    }
    return ans;
}
vector<int> prevSmall(vector<int> matrix) {
    stack<int> k;
    k.push(-1);
    int n = matrix.size();
    vector<int> ans(n);

    for(int i = 0; i<n; i++ ) {
        int num = matrix[i];
        while(k.top() != -1 && matrix[k.top()] >= num) {
            k.pop();
        }
        ans[i] = k.top();
        k.push(i);
    }
    return ans;
}
int largestHisto(vector<int>matrix ) {
    int n2 = matrix.size();
    vector<int> matrix2(n2);
    vector<int> next(n2);
    next = nextSmall(matrix);
    vector<int> prev(n2);
    prev = prevSmall(matrix);

    int area = INT_MIN;
    for(int i =0 ; i<n2; i++ ) {
        int l = matrix[i];
        if(next[i]==-1) {
            next[i] = n2;
        }
        int b = next[i] - prev[i] - 1;
        int newArea = l*b;
        area = max(area,newArea);
    }
    return area;

}
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n2 = matrix[0].size();
        vector<int> newMat(n2);
        for(int i = 0; i<matrix[0].size(); i++ ) {
            newMat[i] = matrix[0][i] - '0';
        }
        int area = largestHisto(newMat);
        int col = matrix[0].size();
        for(int i = 1; i<matrix.size(); i++ ) {
            for(int j = 0; j<matrix[0].size(); j++ ) {
                if(matrix[i][j] != '0'){
                int num = matrix[i][j] - '0' + newMat[j];
                newMat[j] = num;
                }
                else
                newMat[j] = 0;
            }
            int newArea = largestHisto(newMat);
            area = max(area,newArea);
        }
        return area;
    }
};