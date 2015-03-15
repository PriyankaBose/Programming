//https://oj.leetcode.com/problems/same-tree/
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
    bool isSameTree(TreeNode *p, TreeNode *q) 
    {
		if(p==NULL&&q==NULL)
			return true;
		else if(p==NULL||q==NULL)
			return false;
		if(p->val==q->val)
		{	
			if(isSameTree(p->left, q->left)&&isSameTree(p->right, q->right))
				return true;
		}
		return false;
    }	
};

int main()
{
	Solution sol;
	
	TreeNode* n1 = new TreeNode(1);
	TreeNode* n2 = new TreeNode(2);
	TreeNode* n3 = new TreeNode(3);
	TreeNode* n4 = new TreeNode(4);
	TreeNode* n5 = new TreeNode(5);
	n1->left = n2;
	n2->left = n3;
	n1->right = n4;
	n3->right = n5;	
	cout << sol.isSameTree(n1, n2) << endl;
	return 0;
}