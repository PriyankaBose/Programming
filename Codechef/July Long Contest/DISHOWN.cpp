#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#include <queue>
 
using namespace std;
 
#define gc getchar_unlocked
 
/*void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c < 48 || c > 57); c = gc());
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
}
 */
 struct GraphNode
{
	struct GraphNode* parent;
	int index,score,rank;
};
GraphNode* FindSet(GraphNode* x)
{
	if(x != x->parent)
		x->parent = FindSet(x->parent);
	return x->parent;
}

void Link(GraphNode* x, GraphNode* y)
{
    GraphNode *t;
	if(x->rank > y->rank)
		y->parent = x;
	else
	{
		t=x;
		x=y;
		y=t;
		x->parent = y;
		if(x->rank == y->rank)
			y->rank = y->rank + 1;
	}
}
 void Union(GraphNode* x, GraphNode* y)
{
	if(FindSet(x) != FindSet(y))
		Link(FindSet(x), FindSet(y));
}



int main()
{
	int t,n,q,d,x,y,i;
	GraphNode g[10001],*own1,*own2;
	scanf("%d",&t);
	//scanint(t);
	while(t--)
	{
		scanf("%d",&n);
		//scanint(n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&g[i].score);
			g[i].parent=&g[i];
			g[i].index=i;
			g[i].rank=0;
		}
		
		scanf("%d",&q);	
		//scanint(q);
		while(q--)
		{
			scanf("%d",&d);
			//scanint(d);
			if(d==0)
			{
				scanf("%d",&x);	
				scanf("%d",&y);	
				//scanint(x);
				//scanint(y);
				own1=FindSet(&g[x]);
				own2=FindSet(&g[y]);
				if(own1==own2)
					printf("Invalid query!\n");
				else if((own1->score)>(own2->score))
					Union(own1,own2);
				else if((own1->score)<(own2->score))
					Union(own2,own1);
			}
			else
			{
				scanf("%d",&x);	
				//scanint(x);
				printf("%d\n",(FindSet(&g[x]))->index);
			}
		}
	}
	return 0;
}  