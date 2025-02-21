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
class FindElements {
public:
    TreeNode* rootnode;
    void solve(TreeNode* root,int val){
        if(root==NULL){
            return;
        }
        root->val = val;
        if(root->left){
            solve(root->left, 2*val+1);
        }
        if(root->right){
            solve(root->right,2*val+2);
        }
    }
    FindElements(TreeNode* root) {
            rootnode=root;
            solve(rootnode,0);
    }
    bool dfs(TreeNode* root,int target){
        if(root==NULL){
            return false;
        }
        if(root->val==target){
            return true;
        }
        return (dfs(root->left,target) || dfs(root->right,target));    

    }
    
    bool find(int target) {
        return dfs(rootnode,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */