//https://oj.leetcode.com/problems/merge-two-sorted-lists/
#include<iostream>
using namespace std;

 struct ListNode {
   int val;
     ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) 
	{
        ListNode *temp=NULL,*res=NULL;
		if(l1==NULL)
		{
			if(l2)
				return l2;
		}
		else
		{
			if(l1)
				return l1;
		}
		while(l1!=NULL && l2!=NULL)
		{
			if((l1->val) >= (l2->val))
			{
				if(temp)
				{
					temp->next=l2;
					temp=temp->next;
				}
				else
					temp=res=l2;
				
				l2=l2->next;
			}
			else if((l2->val) >= (l1->val))
			{
				if(temp)
				{
					temp->next=l1;
					temp=temp->next;
				}
				else
					temp=res=l1;
				
				l1=l1->next;
			}
			
		}
		if(l1==NULL)
		{
			if(l2)
			{
				temp->next=l2;
				temp=temp->next;
			}
		}
		else
		{
			if(l1)
			{
				temp->next=l1;
				temp=temp->next;
			}
		}
		return res;
    }
};
int main()
{
	return 0;
}