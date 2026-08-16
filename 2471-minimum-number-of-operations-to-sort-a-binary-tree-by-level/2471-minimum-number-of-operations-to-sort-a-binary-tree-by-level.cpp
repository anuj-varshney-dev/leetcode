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
    int minimumOperations(TreeNode* root) {
        int count=0;
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>arr;
            unordered_map<int,int>mp;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                arr.push_back(node->val);
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
             vector<int>temp=arr;
            sort(temp.begin(),temp.end());
            for(int j=0;j<arr.size();j++)
            {
                mp[arr[j]]=j;
            }
            for(int j=0;j<arr.size();j++)
            {
                if(arr[j]==temp[j])
                {
                    continue;
                }
               else
               {
                    int ci=mp[temp[j]];
                    mp[arr[j]]=ci;
                    mp[temp[j]]=j;
                    swap(arr[j],arr[ci]);
                     count++;
               }
            }
            mp.clear();
            arr.clear();
            temp.clear();
        }
        return count;
    }
};