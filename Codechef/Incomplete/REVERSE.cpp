#include<list>
#include<queue>
#include<iostream>
#include<cstdio>
#include<vector>
#define INFINITY 100002
using namespace std;


class Nodes
{
		
	public:
		int vertex,weight;
		Nodes(int vertex, int weight)
		{
			this->vertex=vertex;
			this->weight=weight;
		}
		void display()
		{
			cout<<vertex<<"  "<<weight<<endl;
		}
};

list< Nodes > *adjList = new list< Nodes >[100001];
class compareDist
{
	public:
		bool operator()(std::pair<int, int> a, std::pair<int, int> b)
		{
			return a.second > b.second; 
            
		}
};
void djkstra(int vertices, int source,int end)
{
	int i,u,distance[100001],val;
	priority_queue< std::pair< int,int >, std::vector<std::pair<int,int> >,compareDist>p;
	list<Nodes>::iterator it;
	
	for(int i=1;i<=vertices;i++)
	{
		distance[i]=INFINITY;
	}

	distance[source]=0;
	p.push(pair<int, int>(source,0));
	while(!p.empty())
	{
		u=p.top().first;
		val=p.top().second;
		//cout<<u<<"   "<<val<<endl;
		p.pop();
		if(u==end)
			break;
		for(it=adjList[u].begin();it!=adjList[u].end();it++)
		{
			cout<<it->vertex<<"------"<<distance[it->vertex]<<endl;
			if(distance[it->vertex]> (distance[u]+it->weight))
			{
				distance[it->vertex]=distance[u]+it->weight;
				cout<<"Distance Update"<<it->vertex<<"------"<<distance[it->vertex]<<endl;
				p.push(pair<int, int>(it->vertex,distance[it->weight]));
			}
			
			
		}
	}
	for(i=1;i<=vertices;i++)
		cout<<distance[i]<<endl;
	//cout<<distance[end];
}

int main()
{
	int N,M,i,u,v,w;
	scanf("%d",&N);
	scanf("%d",&M);
	list<Nodes>::iterator it;
	
	for(i=0;i<M;i++)
	{
		scanf("%d %d %d",&u,&v,&w);
		adjList[u].push_back(Nodes(v,w));
        //adjList[v].push_back(Nodes(u,1));
	}

	/*for(i=1;i<=N;i++)
	{
		for(it=adjList[i].begin();it!=adjList[i].end();it++)
		{
			cout<<i<<"  "<<it->vertex<<"  "<<it->weight<<endl;;
		}
		cout<<endl;
	}*/
	djkstra(N,1,N);
	return 0;	
}