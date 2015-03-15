//https://oj.leetcode.com/problems/binary-tree-level-order-traversal/
#include<iostream>
#include<vector>
#include<queue>
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
    vector<vector<int> > levelOrder(TreeNode *root) 
	{
		TreeNode *temp;
		int l,prevL=1;
        vector<vector<int> > result;
		vector<int> rowLevel;
		queue<TreeNode*> nodeList;
		queue<int>lNum;
		if(root==NULL)
			return result;
		
		nodeList.push(root);
		lNum.push(1);
		while(!nodeList.empty())
		{
			temp=nodeList.front();
			nodeList.pop();
			l=lNum.front();
			lNum.pop();
			if(prevL==l)
				rowLevel.push_back(temp->val);
			else
			{
				result.push_back(rowLevel);
				rowLevel.clear();
				rowLevel.push_back(temp->val);
			}
			if(temp->left)
			{
				nodeList.push(temp->left);
				lNum.push(l+1);
			}
			if(temp->right)
			{
				nodeList.push(temp->right);
				lNum.push(l+1);
			}
			prevL=l;
		}
		if(rowLevel.size()!=0)
			result.push_back(rowLevel);
		return result;
    }
};
int main()
{
	return 0;
}