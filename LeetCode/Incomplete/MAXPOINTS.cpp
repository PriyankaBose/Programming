#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for a point.*/
  struct Point 
  {
      int x;
      int y;
      Point() : x(0), y(0) {}
      Point(int a, int b) : x(a), y(b) {}
 };

class Solution {
public:
    int maxPoints(vector<Point> &points) 
	{
        int i,slope;
		vector<double> k;
		vector <Point>::iterator it1,it2;
		for(it1=points.begin();it1!=points.end();it1++)
		{
			for(it2=points.begin();it2!=points.end();it2++)
			{
				if(it1->x != it2->x)
					
			}
		}
		return 0;
    }
};

int main()
{
	int n,i,x,y,res;
	vector <Point> points;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		points.push_back(Point(x,y));
	}
	Solution *s=new Solution();
	res=s->maxPoints(points);
	return 0;
}