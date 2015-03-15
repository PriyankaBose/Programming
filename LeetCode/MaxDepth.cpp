#include<iostream>
#include<cstdio>
 #include<algorithm>
 
 using namespace std;
 
 struct TreeNode
 {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution
{
public:
    int maxDepth(TreeNode *root) 
	{
        TreeNode *node=NULL;
		int maxd;
		if(root==NULL)
			return 0;
		maxd=max(maxDepth(root->left) , maxDepth(root->right)) +1;
		return maxd;
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
	TreeNode* n6 = new TreeNode(6);
	TreeNode* n7 = new TreeNode(7);
	n1->left = n2;
	n2->left = n3;
	n2->right=n5;
	n1->right = n4;
	n4->right=n6;
	n6->right=n7;
	cout<<sol.maxDepth(n1);
}