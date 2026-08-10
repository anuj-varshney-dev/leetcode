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
    void helper(TreeNode* root,int num,int& fsum)
    {
        if(!root)
        {
            return;
        }
        num=num*10+root->val;
        if(root->left == NULL && root -> right == NULL)
        {
           fsum+=num;
        }
        helper(root->left,num,fsum);
        helper(root->right,num,fsum);
    }
    int sumNumbers(TreeNode* root) {
        int num=0;
        int fsum=0;
        helper(root,num,fsum);
        return fsum;
    }
};