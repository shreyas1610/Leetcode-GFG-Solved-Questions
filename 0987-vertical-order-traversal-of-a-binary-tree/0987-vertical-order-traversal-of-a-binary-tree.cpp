/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    //Page 185
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL) return {};
        
        map<int, map<int, vector<int>>> m;
        queue<pair<TreeNode* ,pair<int,int>>>q;

        vector<int>ans;
        vector<vector<int>>Ans;

        int score = 0;
        int lvl = 0;
        q.push({root, {score, lvl}});

        while(!q.empty()){
            TreeNode* temp = q.front().first;
            score = q.front().second.first;
            lvl = q.front().second.second;
            
            q.pop();
            
            m[score][lvl].push_back(temp -> val);
            sort(m[score][lvl].begin(), m[score][lvl].end());

            if(temp -> left) q.push({temp -> left, {score - 1, lvl + 1}});
            if(temp -> right) q.push({temp -> right, {score + 1, lvl + 1}});
  
        }

        // combine vectors on the same line with different levels.
        
        for(auto x: m){
            for(auto y: x.second){
                for(auto z: y.second){
                    ans.push_back(z);
                }
            }
            Ans.push_back(ans);
            ans.clear();
        }
        return Ans;
    }
};