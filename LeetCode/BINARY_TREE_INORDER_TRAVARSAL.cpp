//https://oj.leetcode.com/problems/binary-tree-inorder-traversal/
#include<iostream>
#include<vector>
#include<stack>
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
    vector<int> inorderTraversal(TreeNode *root) 
	{
        stack<TreeNode*> nodeList;
		TreeNode *temp;
		vector<int>result;
		if(root==NULL)
			return result;
			
		temp=root;
		nodeList.push(temp);
		temp=temp->left;
		while(!nodeList.empty())
		{
			if(temp!=NULL)
			{
				nodeList.push(temp);
				temp=temp->left;
			}
			else
			{
				temp=nodeList.top();
				nodeList.pop();
				result.push_back(temp->val);
				temp=temp->right;
				if(temp)
				{
					nodeList.push(temp);
					temp=temp->left;
				}
				
			}
		}
		return result;
    }
};

int main()
{
	return 0;
}