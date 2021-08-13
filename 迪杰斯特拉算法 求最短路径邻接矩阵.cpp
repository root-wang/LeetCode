#include<iostream>
#define INF 100000
int a[101]{};
struct node{
	int l[101]{};
};

void creatgrape(node p[],int n)
{
	using namespace std;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
	{
		cin >> p[i].l[j];	
	}
}

int dij(node p[],int n,int s,int q)
{
	std::cin >>s >>q;
	int t,dis[100]{},vis[100] {},road[101];
	for(int i=0;i<n;i++)
	{
		dis[i]=p[s].l[i];
	}	
	vis[s]=1;int h=0;
	while(1){
	t=-1;
	int min=INF;
	for(int i=0;i<n;i++)
	{
		if(dis[i]<min&&vis[i]!=1)
		{
			min=dis[i];
			t=i;//road[0]=i;
		}
	}
	vis[t]=1;
	for(int i=0;i<n;i++)
	{
		if(1!=vis[i]&&dis[i]>min+p[t].l[i])
		{
		   dis[i]=min+p[t].l[i];
		   //road[i]=t; 
	        }
        }
        }
	//for(int i=0;i<q;i++)
	return dis[q];
	
}

int main()
{
	int n,m;
	std::cin >> n;
	int s[101],q[101];
	node p[n];
	creatgrape(p,n);
	std::cin >>m;
	for(int i=0;i<m;i++)
	{
		dij(p,n,s[i],q[i]);
		a[m]=dij(p,n,s[i],q[i]);
	}
	for(int i=0;i<m;i++)
	{
		std::cout<< a[m] <<std::endl;
	}
	return 0;
}
