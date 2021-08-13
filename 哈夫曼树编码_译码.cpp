#include<iostream>
#include <cstring>
using namespace std;

struct hfm
{
	int val=0;
	char data=-1;
	int sign=-1;
	int parents=-1,lchild=-1,rchild=-1;
};

void creathfm(int n,hfm p[])
{
	for(int i=0;i<n;i++)
	{
		cin >> p[i].data;
	}
	for(int i=0;i<n;i++)
	{
		cin >> p[i].val;
	}
	for(int j=0;j<n-1;j++)
	{
	
		int x1,x2;
		int val1=10000,val2=10000;
		for(int i=0;i<n+j;i++)
		{
			if(p[i].val<val1&&p[i].parents==-1)
			{
				x2=x1;
				val2=val1;
				x1=i;
				val1=p[i].val;
			}
			else if(p[i].val<val2&&p[i].parents==-1)
			{
				x2=i;
				val2=p[i].val;
			}
		}
		p[x1].parents=p[x2].parents=n+j;
		p[n+j].val=val1+val2;
		p[n+j].lchild=x1;
		p[x1].sign=0;
		p[n+j].rchild=x2;
		p[x2].sign=1;
	}
}

void bianma(int n,hfm p[],char c[])
{
	char s[100];
	int s1[100];
	cin >> s;
	for(int i=0;i<strlen(s);i++)
	{
		int k=0;
		for(;k<n;k++)
		{
			if(s[i]==p[k].data)
			break;
		}
		int l=0;
		for(int j=k;p[j].parents!=-1;l++)
		{
			s1[l]=p[j].sign;
			j=p[j].parents;
		}
			for(l--;l>=0;l--)
			{cout <a< s1[l];}
		}
}

int main()
{
	int n;
	char c[100];
	cin >> n;
	hfm p[100];
	creathfm(n,p);
	bianma(n,p,c);
	//yima(n,p,c);
	return 0;
}
