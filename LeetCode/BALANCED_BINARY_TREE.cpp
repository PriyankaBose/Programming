#include<iostream>
using namespace std;

 struct TreeNode 
 {
    int val;
    TreeNode *left;
    TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isBalanced(TreeNode *root) 
	{
		int hDifference;
        if(root==NULL)
			return true;
		if(isBalanced(root->left) && isBalanced(root->right))
		{
			hDifference=height(root->left) - height(root->right);
			if(hDifference <=1 && hDifference >=-1)
				return true;
		}
		return false;
    }
	int height(TreeNode *root)
	{
		int h;
		if(root==NULL)
			return 0;
		h=max(height(root->left),height(root->right)) + 1;
		return h;
	}
};