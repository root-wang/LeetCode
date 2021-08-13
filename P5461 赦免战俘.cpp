#include<iostream>
#include<cmath>
int a[10000][10000]={};

void di(int s,int t,int k)
{
	
	if(k==2)
	{
		a[s][t]=0;
		return;
	}
	for(int i=s;i<s+k/2;i++)
	for(int j=t;j<t+k/2;j++)
	{
		a[i][j]=0;
	}
	di(s,t+k/2,k/2);
	di(s+k/2,t,k/2);
	di(s+k/2,t+k/2,k/2);
	
	
}

void mat(int n)
{
	int m=pow(2,n);
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			a[i][j]=1;
		}
	di(0,0,m);
	for(int i=0;i<m;i++)
	for(int j=0;j<m;j++)
	{
		if(j==m-1) std::cout << a[i][m-1] <<std ::endl;
		else std::cout <<a[i][j]<<' ';
	}
}

int main()
{
	int n;
	std::cin >> n;
	mat(n);
	return 0;
}
