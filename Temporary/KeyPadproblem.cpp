/*Question 1: You are given a phone keypad like following diagram, where each character corresponds to a digit mentioned in the same box.


You are given n strings and you have to find their decimal representation. You have to print the string and corresponding decimal representation in descending order.
Like if you are given “amazon” then its corresponding decimal notation will be 262966.
If more than one strings have same decimal notation then you have to print them in the order in which input is given.
(Given that given string consists of lower case alphabets only.)

Test Case 1:
5
Amazon
Microsoft
Facebook
Aa
Bb

Output:
642767638  microsoft
32232665  facebook
262966  amazon
22 aa
22 bb
*/



#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<cmath>

using namespace std;

typedef struct list
{
    string str;
    unsigned long long int num;
    struct list *next;

} node;

void insert(node **head,node *temp)
{
    if(*head==NULL)
    {
        *head=temp;
        return;
    }

    node *h=*head,*ptr=NULL,*ptr1=*head;
    if(temp->num>h->num)
    {
        temp->next=*head;
        *head=temp;
        return;
    }
    while(h!=NULL)
    {
        if(h->num > temp->num)
        {
            ptr1=h;
            h=h->next;
        }
		else if(h->num == temp->num)
		{
			if((h->str).compare(temp->str) < 0)
			{
				ptr1=h;
				h=h->next;
			}
			else
				break;
		}
        else 
			break;
    }

    ptr=ptr1->next;
    ptr1->next=temp;
    temp->next=ptr;

    return;
}

void findCode(string text,node **head)
{
    int k,n;
	int a[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
	unsigned long long int code=0;
    n=text.size();
	k=0;
	while(k < n)
	{
		code = code * 10 + a[text[k] - 97];
		k++;
	}
	
    node *temp=new node;
    temp->str=text;
    temp->num=code;
    temp->next=NULL;

    insert(head,temp);
    return;
}

void printList(node *head)
{
    if(head==NULL)return;
    cout<<head->num<<"\t"<<head->str<<endl;
    printList(head->next);
    return;
}

int main()
{
    string text;
    int n,i;
    node *head=NULL;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>text;
        findCode(text,&head);
    }
    printList(head);
    return 0;
}