#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
struct point
{
	float x,y;
};

void init(point p)
{
	p.x=0;
	p.y=0;
}

void circu(point *p1,point *p2,point *p3)
{
	float a,b,c;
	a=sqrt((p1->x-p2->x)*(p1->x-p2->x)+(p1->y-p2->y)*(p1->y-p2->y));
	b=sqrt((p1->x-p3->x)*(p1->x-p3->x)+(p1->y-p3->y)*(p1->y-p3->y));
	c=sqrt((p3->x-p2->x)*(p3->x-p2->x)+(p3->y-p2->y)*(p3->y-p2->y));
	printf("%.2f",a+b+c);
}

void run()
{
	int i;
	point p1,p2,p3;
	init(p1);
	init(p2);
	init(p3);
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
	cin >> p3.x >> p3.y;
	circu(&p1,&p2,&p3);
}
int main()
{
	run();
	return 0;
}
