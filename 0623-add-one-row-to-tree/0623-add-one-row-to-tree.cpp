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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* dummy = new TreeNode(val);
            dummy -> left = root;
            return dummy;
        }
        queue<TreeNode*>q;
        q.push(root);
        int curr=1;
        while(!q.empty())
        {
            int size=q.size();
            if(curr==depth-1)
            {
                for(int j=0;j<size;j++)
            {
                 TreeNode* current = q.front();
                 q.pop();
                TreeNode* newleft = new TreeNode(val);
                TreeNode* newright = new TreeNode(val);
                 TreeNode* currleft=current->left;
                  TreeNode* currright=current->right;
                current ->left = newleft;
                current ->right = newright;
                newleft ->left = currleft;
                 newright ->right = currright;
            }
            return root;
            }
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
        return root;
    }
};