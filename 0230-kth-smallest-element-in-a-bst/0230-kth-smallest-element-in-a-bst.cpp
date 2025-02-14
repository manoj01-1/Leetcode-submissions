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
   
    void iot(TreeNode* root,vector<int>&nums){
        if(root==NULL)return;
        
        nums.push_back(root->val);
        
        iot(root->left,nums);
        iot(root->right,nums);
    }
    int kthSmallest(TreeNode *root, int k) {
        vector<int>nums;
        iot(root,nums);
        
        if(nums.size()<k)return -1;
        
        sort(nums.begin(),nums.end());
        
        return nums[k-1];
    }
};