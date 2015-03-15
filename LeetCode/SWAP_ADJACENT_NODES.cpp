#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

  struct ListNode 
  {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode *swapPairs(ListNode *head) 
	{
        ListNode *temp1,*temp2;
		if(head==NULL)
			return NULL;
		else if(head->next==NULL)
			return head;
		else
		{
			temp2=head->next;
			head->next=temp2->next;
			temp2->next=head;
			//head=head->next;
			temp1=temp2;
			while(head->next!=NULL)
			{
				temp2=head;
				head=head->next;
				if(head->next==NULL)
					break;
				temp2->next=head->next;
				head->next=(head->next)->next;
				(temp2->next)->next=head;
			}
		}
		/*temp2=temp1;
		while(temp2!=NULL)
		{
			cout<<temp2->val<<endl;
			temp2=temp2->next;
		}*/
		return temp1;
    }
	
};
int main()
{
	Solution sol;
	struct ListNode *new_node,*current,*start=NULL;
	
	for(int i=0;i<2;i++)
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
	sol.swapPairs(start);
	return 0;
}