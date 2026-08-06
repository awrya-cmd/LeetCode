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
    int findMax(TreeNode* root)
    {
        while(root->right)
            root = root->right;

        return root->val;
    }

    int findMin(TreeNode* root)
    {
        while(root->left)
            root = root->left;

        return root->val;
    }

    bool isValidBST(TreeNode* root)
    {
        if(root==NULL)
            return true;

        if(root->left && findMax(root->left)>=root->val)
            return false;

        if(root->right && findMin(root->right)<=root->val)
            return false;

        return isValidBST(root->left)
            && isValidBST(root->right);
    }
};