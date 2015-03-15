#include<iostream>
#include<cstdio>
using namespace std;
struct TreeNode {
    int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) 
	{
		TreeNode *node = root;
		vector<int> res;
        while(node!=root)
		{
			res.push_back(node->val);
			while(node->left!=NULL)
			{
				res.push_back(node->val);
				node=node->left;
			}
			if(node->right!=NULL)
				node=node->left;
		}
		
    }
};