#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) 
	{
        ListNode *temp;
		int q;
		temp=l1;
		q=0;
		while(l1->next!=NULL && l2->next!=NULL)
		{
			l1->val=l1->val + l2->val+q;
			q=l1->val/10;
			if(q!=0)
				l1->val=(l1->val)%10;
			l1=l1->next;
			l2=l2->next;
		}
		
		l1->val=l1->val + l2->val+q;
		q=l1->val/10;
		if(q!=0)
			l1->val=(l1->val)%10;
				
		if(l1->next==NULL&&l2->next!=NULL)
			l1->next=l2->next;
		
		while(l1->next!=NULL)
		{
			l1=l1->next;
			if(q==0)
				break;
			else
			{
				l1->val=l1->val+q;
				q=l1->val/10;
				l1->val=(l1->val)%10;
			}
		}
		if(q==1)
		{
			l1->next=(ListNode*)malloc(sizeof(struct ListNode));
			l1=l1->next;
			l1->val=1;
			l1->next=NULL;
		}
		return temp;
    }
};

int main()
{
	Solution sol;
	struct ListNode *new_node,*current,*start=NULL;
	
	for(int i=0;i<4;i++)
	{
		new_node=(struct ListNode *)malloc(sizeof(struct ListNode));
		printf("\nEnter the data : ");
		scanf("%d",&new_node->val);
		new_node->next=NULL;
		if(start==NULL)
		{
			start=new_node;
			current=new_node;
		}
		else
		{
			current->next=new_node;
			current=new_node;
		}
	}
	new_node=start;
	current = sol.addTwoNumbers(start,new_node);
	while(current!=NULL)
	{
		cout<<current->val<<"	";
		current=current->next;
	}
	return 0;
}