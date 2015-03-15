#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include <cstdio>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
	int neg = 0;
    for(;((c < 48 || c > 57) && c != '-'); c = gc());
    if(c == '-') { neg = 1; c = gc(); }
    for(; c > 47 && c < 58; c = gc()) { x = (x << 1) + (x << 3) + c - 48; }
    if(neg) x = -x;
}
 
int main()
{
	int t,x,y,f,d;
	//scanf("%d",&t);
	scanint(t);
	while(t>0)
	{
		f=0;
		//scanf("%d",&x);
		scanint(x);
		//scanf("%d",&y);
		scanint(y);
		if(x==0 && y==0)
			f=1;
		else if((x>0 && y>=0)||(x>=0 && y>0))
		{
			if(x>=y)
			{
				d=x-y;
				y=y+d+1;
			}
			else
			{
				d=y-x;;
				x=x+(d-1);
			}
			if((x-1)%2==0 && (y-2)%2==0)	
				f=1;
		}
		else if(x>=0 &&  y<0)
		{
			y=-y;
			if(x>y)
			{
				d=x-y;
				y=y+d-1;	
			}
			else
			{
				d=y-x;
				x=x+d+1;
			}
			if((x-3)%2==0 && (y-2)%2==0)	
				f=1;
		}
		else if(x<0 && y<0)
		{
			y=-y;
			x=-x;
			if(x>=y)
			{
				d=x-y;
				y=y+d;	
			}
			else
			{
				d=y-x;
				x=x+d;
			}
			if((x-2)%2==0 && (y-2)%2==0)	
				f=1;
			
		}
		else if(x<0 && y>=0)
		{
			x=-x;
			
			if(x>=y)
			{
				d=x-y;
				y=y+d;	
			}
			else
			{
				d=y-x;
				x=x+d;
			}
			if((x-2)%2==0 && (y-2)%2==0)	
				f=1;
		}
		
		if(f==1)
			printf("YES\n");
		else
			printf("NO\n");
		t--;
	}
	return 0;
} 