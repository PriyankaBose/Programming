#include<iostream>
using namespace std;
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *temp=NULL,*node=NULL;
		temp=head;
		if(temp==NULL)
			return false;
		node=temp->next;
		while(temp!=node)
		{
			if(node==NULL)
				return false;
			node=node->next;
			if(node==NULL)
				return false;
			temp=temp->next;
			node=node->next;
		}
		return true;
    }
};
