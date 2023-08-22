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
    private:
    int Findposition(vector<int> in ,int inorderStart , int inorderEnd , int element ,int  n){
        for(int i = inorderStart ; i<=inorderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
    }
    TreeNode* solve(vector<int> in,vector<int> pre, int &index ,int inorderStart , int inorderEnd , int n){
        if(index>=n || inorderStart>inorderEnd){
            return NULL ;
        }
        
        int element = pre[index++] ; // At every interation index is increasing
        TreeNode* root  = new TreeNode(element); 
        int position  = Findposition(in , inorderStart , inorderEnd ,element, n);
        
        root->left = solve(in , pre , index  , inorderStart , position-1 ,n);
        root->right = solve(in , pre , index , position+1 , inorderEnd ,n);
        
        return root ;
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        //Page 192
        int preorderindex  = 0 ;  //Pre order is NLR so First element is root .
        int n = inorder.size();
        TreeNode* ans = solve(inorder , preorder , preorderindex , 0  , n-1 , n );
        return ans ;
    }
};