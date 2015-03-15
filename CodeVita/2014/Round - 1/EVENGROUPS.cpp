#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <cstdio>
#include <queue>
 
using namespace std;

 struct GraphNode
{
	struct GraphNode* parent;
	int index,score,rank;
};

GraphNode g[1000001];

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
	{
		y->parent = x;
		x->score=y->score+x->score;
	}
	else
	{
		t=x;
		x=y;
		y=t;
		x->parent = y;
		y->score=x->score+y->score;
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
	int n,i,j,c,count=0;
	char D;
	GraphNode *own1,*own2;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		g[i].parent=&g[i];
		g[i].index=i;
		g[i].rank=0;
		g[i].score=1;
	}
	
	scanf(" %c ",&D);
	while(D != '-')
	{
		scanf(" %d %d ", &i, &j); 
		if(D == 'C')
		{
			own1=FindSet(&g[i]);
			own2=FindSet(&g[j]);
			Union(own1,own2);
		}
		else
			if(D == 'Q')
			{
				/*for(c=1;c<=n;c++)
				{
					p=(FindSet(&g[c]))->index;	
					if(p!=g[c].index)
						g[p].score++;
				}*/
				for(c=1;c<=n;c++)
				{
					if((g[c].score!=0) && (g[c].score%2) == 0)
						count++;
				}
				printf("%d\n",count);
			}
		scanf( "%c ",&D);
		count=0;
		//for(c=1;c<=n;c++)
			//g[c].score=1;
	}
	return 0;
}  