#include<bits/stdc++.h>
#include "sol.h"
using namespace std;

class Point
{
	int x;
	int y;
	public:
	Point(int _x, int _y)
	{
		x=_x;
		y=_y;
	}
	int getX() const {return x;}
	int getY() const {return y;}
};

class compare
{
	public:
	int operator() (const Point& p1, const Point& p2)
	{
		return p1.getX()>p2.getX();
	}
};

int main()
{
	int gr[]={1,2,3,4,5,6,7,8,9,10};
	int pr[]={29,19,13,5,7,5,7,4,6,5};
	int i,j;
	
	priority_queue <Point, vector<Point>, compare > pq;
	priority_queue <Point, vector<Point>, compare > opq;
	priority_queue <Point, vector<Point>, compare > npq;

	for(i=0;i<10;i++)
	{
		opq.push(Point(pr[i],gr[i]));
		npq.push(Point(pr[i],gr[i]));
		for(j=0;j<=i;j++)
		{
			pq.push(Point(pr[j],gr[j]));
		}
		while(pq.empty()==false)
		{
			Point p=pq.top();
			cout<<"("<<p.getX()<<","<<p.getY()<<")"<<"	";
			pq.pop();
		}
		cout<<endl;
	}
	
	sol();
	return 0;
}
