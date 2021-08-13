#include<iostream>


void check(int n,int m)
{
	int i=0,j=0,l1=n,l2=m;
	long long sum=0,cont=0,x1=0,x2=0;
	for(i=1;i<=l1;i++)
	{
		for(j=1;j<=l2;j++)
		{
			x1=sum;
			sum=(sum+(l2-j+1)*(l1-i+1));
			x2=sum-x1;
			if(i==j)cont+=x2;
		}
	}
	std::cout << cont << ' '<< sum-cont;
}

int main()
{
	int n,m;
	std::cin >> n >> m;
	check(n,m);
	return 0;
}
