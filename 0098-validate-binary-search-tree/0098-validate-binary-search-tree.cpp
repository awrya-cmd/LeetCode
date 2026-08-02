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
class Solution
{
public:

    void inorder(TreeNode* root, vector<int>& n)
    {
        if (root == NULL) return;
        inorder(root->left, n);
        n.push_back(root->val);
        inorder(root->right, n);
    }

    bool isValidBST(TreeNode* root)
    {
        vector<int> n;
        inorder(root, n);

        for(int i = 0; i < n.size()-1; i++)
        {
            if(n[i] >= n[i+1]) return false;
        }
        return true;
    }
};