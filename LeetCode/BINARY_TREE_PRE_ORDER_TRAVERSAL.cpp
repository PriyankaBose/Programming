//https://oj.leetcode.com/problems/binary-tree-preorder-traversal/
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
    vector<int> preorderTraversal(TreeNode *root) 
	{
        stack<TreeNode*> nodeList;
		TreeNode *temp;
		vector<int>result;
		if(root==NULL)
			return result;
			
		temp=root;
		nodeList.push(temp);
		result.push_back(temp->val);
		temp=temp->left;
		while(!nodeList.empty())
		{
			if(temp)
			{
				nodeList.push(temp);
				result.push_back(temp->val);
				temp=temp->left;
			}
			else
			{
				temp=nodeList.top();
				nodeList.pop();
				temp=temp->right;
				if(temp)
				{
					nodeList.push(temp);
					result.push_back(temp->val);
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