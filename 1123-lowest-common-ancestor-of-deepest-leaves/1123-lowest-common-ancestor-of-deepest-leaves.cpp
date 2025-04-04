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
public:

    pair<int,TreeNode*> dfs(TreeNode* root){
        if(root == NULL){
            return {0,root};
        }
        auto leftn =  dfs(root->left);
        auto rightn =  dfs(root->right);
       
        if(leftn.first == rightn.first){
            return {leftn.first+1,root};
        }
        else if(leftn.first > rightn.first){
            return {leftn.first+1,leftn.second};
        }
        else{
            return {rightn.first+1,rightn.second};
        }
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
       auto t = dfs(root);
       return t.second;
        
    }
};