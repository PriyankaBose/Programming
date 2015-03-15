#include<iostream>
using namespace std;

 struct TreeLinkNode
  {
	   int val;
	   TreeLinkNode *left, *right, *next;
	   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
  };

class Solution {
public:
    void connect(TreeLinkNode *root) 
	{
        TreeLinkNode *p1,*p2;
		if(root==NULL)
			return;
		connect(root->left);
		connect(root->right);
		p1=root->left;
		p2=root->right;
		while(p1!=NULL && p2!=NULL)
		{
			p1->next=p2;
			p1=p1->right;
			p2=p2->left;
		}
    }
};
