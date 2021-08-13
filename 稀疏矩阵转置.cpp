#include<iostream>
struct node
{
	int lie=-1;
	int hang=-1;
	int data=-1;
};
void zhuanzhi(int n,int m,node p[],int k);
void creatmax(int n,int m,node p[])
{
	int k=0;
	while(1)
	{	
		std::cin >> p[k].hang >> p[k].lie >> p[k].data;
		if(0==p[k].hang&&0==p[k].lie&&0==p[k].data)break;
		k++;
	}
	zhuanzhi(n,m,p,k);
}

void zhuanzhi(int n,int m,node p[],int k)
{
	for(int i=0;i<k;i++)
	{
		int temp=0;
		temp=p[i].hang;
		p[i].hang=p[i].lie;
		p[i].lie=temp;
	}
	
		for(int j=1;j<=m;j++)
		for(int l=1;l<=n;l++)
			 for(int i=0;i<k;i++)
	{
		if(j==p[i].hang)
		{
			if(l==p[i].lie)
			std::cout << p[i].hang <<' '<<p[i].lie <<' '<<p[i].data << std::endl;
	    }
	}
		
	
}

int main()
{
	int n,m;
	std::cin >> n >> m;
	node p[101];
	creatmax(n,m,p);
	return 0;
}

