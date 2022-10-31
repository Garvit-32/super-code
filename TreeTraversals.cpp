#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left, *right;
};

void inorder(TreeNode *root, vector<int> &ans)//print tree in left->root->right
{
    if (!root)//return if reached null
    {
        return;
    }
    inorder(root->left, ans);//travel left
    ans.push_back(root->val);
    inorder(root->right, ans);//travel right after printing left
}

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

void preorder(TreeNode *root, vector<int> &ans)//print tree in root->left->right order
{
    if (!root)//return if reached null
    {
        return;
    }
    ans.push_back(root->val);//store root
    preorder(root->left, ans);//travel left
    preorder(root->right, ans);//travel right
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    preorder(root, ans);
    return ans;
}

void postorder(TreeNode *root, vector<int> &ans)//prints tree in left->right->root order
{
    if (!root)//return if reached null
    {
        return;
    }
    postorder(root->left, ans);//travel left
    postorder(root->right, ans);//travel right
    ans.push_back(root->val);//store root
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    postorder(root, ans);
    return ans;
}