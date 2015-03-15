#include<iostream>
#include<vector>
using namespace std;
struct TreeNode 
{
     int val;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode *root) 
	{
		if(root==NULL)
			return true;
        else if(isLeftRightSame(root->left,root->right))
			return true;
		return false;
    }
	bool isLeftRightSame(TreeNode *leftTree,TreeNode *rightTree)
	{
		if(leftTree==NULL && rightTree==NULL)
			return true;
		else if((leftTree!=NULL && rightTree!=NULL)&&(leftTree->val == rightTree->val))
		{
			if(isLeftRightSame(leftTree->left,rightTree->right) && isLeftRightSame(leftTree->right,rightTree->left))
				return true;
		}
		return false;
	}
};
int main()
{
	return 0;
}