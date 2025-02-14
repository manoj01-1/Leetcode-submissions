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
    void iot(TreeNode * root,vector<int>&res){
        if(root==NULL)return;
        
        iot(root->left,res);
        res.push_back(root->val);
        
        iot(root->right,res);
    }
    void ciot(TreeNode *root,vector<int>&res,int &index){
        if(root==NULL)return;
        
        ciot(root->left,res,index);
        
        root->val=res[index];
        index++;
        
        ciot(root->right,res,index);
        
    }
    void recoverTree(TreeNode* root) {
        vector<int>res;
        
        iot(root,res);
        
        sort(res.begin(),res.end());
        int index=0;
        ciot(root,res,index);
    }
};