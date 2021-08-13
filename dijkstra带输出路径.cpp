#include<iostream>
#define INF 100000
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

void dij(node p[],int n,int s,int q)
{
	std::cin >>s >>q;
	int t,dis[100]{},vis[100] {},road[101]{};
	for(int i=0;i<n;i++)
	{
		dis[i]=p[s].l[i];
	}	
	vis[s]=1;//标记起始点
	for(int j=0;j<n;j++){//循环的参数一定要无关不要对循环体有影响
	int min=INF;//最大值在循环开始重新定义
	for(int i=0;i<n;i++)
	{
		if(dis[i]<min&&vis[i]!=1)
		{
			min=dis[i];
			t=i;
		}
	}
	vis[t]=1;
	for(int i=0;i<n;i++)
	        {	
		if(1!=vis[i]&&dis[i]>min+p[t].l[i])
		{
		   dis[i]=min+p[t].l[i];
		   road[i]=t;//是t
	        }
        	} 
        }
//	for(int i=0;i<n;i++)
//	{std::cout << dis[i]<< std::endl;}
//	std::cout << dis[q]<<std::endl;
//	for(int i=0;i<n;i++)
//	{
//		std::cout << road[i] <<" ";
//	}
	int u=q,i=0,put[101];
	while(0!=u)
	{
		put[i]=road[u];
		i++;
		u=road[u];
	}
	std::cout << s <<std::endl;
	for(int k=i-2;k>=0;k--)//输出的是中间路线 不要有起点，put最后一个是0，倒数第一个是起点 无需
	{
		std::cout << put[k] <<std::endl;
	}
	std::cout << q <<std::endl;
}

int main()
{
	int n;
	std::cin >> n;
	int s,q;
	node p[n];
	creatgrape(p,n);
	dij(p,n,s,q);
}
