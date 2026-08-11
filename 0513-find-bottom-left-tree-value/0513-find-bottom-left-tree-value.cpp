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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans;
       int depth=height(root);
        int curr=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            if(curr==depth)
            {
                TreeNode* rootans=q.front();
                ans=rootans->val;
            }
            int size=q.size();
                for(int i=0;i<size;i++)
                {
                     TreeNode* node=q.front();
                    q.pop();
                    if(node->left!=NULL)
                    {
                        q.push(node->left);
                    }
                      if(node->right!=NULL)
                    {
                        q.push(node->right);
                    }
                }
                curr++;
        }
        return ans;
    }
};