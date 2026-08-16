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
long long maxp=0;
long long sum=0;
    int totalsum(TreeNode* root){
        if(!root)
        {
            return 0;
        }
        int leftsum=totalsum(root->left);
        int rightsum=totalsum(root->right);
        sum =  root->val+leftsum+rightsum;
        return sum;
    }
    int product(TreeNode* root){
        if(!root)
        {
            return 0;
        }
        int leftsum=product(root->left);
        int rightsum=product(root->right);
        long long  subtreesum=root->val+leftsum+rightsum;
        long long  remaining=sum-subtreesum;
        maxp=max(maxp,subtreesum*remaining);
        return subtreesum;
    }
    int maxProduct(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int mod=1e9+7;
        sum=totalsum(root);
        product(root);
        return (maxp%mod);
    }
};