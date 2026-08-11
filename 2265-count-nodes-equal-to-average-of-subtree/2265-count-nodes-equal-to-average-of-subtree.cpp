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
    int Count(TreeNode* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        return 1+Count(node->left)+Count(node->right);
    }
    int totalSum(TreeNode* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        int left=totalSum(node->left);
        int right=totalSum(node->right);
        int sum=node->val+left+right;
        return sum;

    }
    bool isAvg(TreeNode* node)
    {
        int sum=totalSum(node);
        int count=Count(node);
        int avg=floor(sum/count);
        if(avg==node->val)
        {
            return true;
        }
        return false;
    }
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(isAvg(node))
            {
                count++;
            }
            if(node->left!=NULL)
            {
                q.push(node->left);
            }
            if(node->right!=NULL)
            {
                q.push(node->right);
            }
        }
        return count;
    }
};