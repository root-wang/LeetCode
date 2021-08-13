#include<iostream>
#include<cstring>
#include<cmath>

std::string fill(int p1,int p2,int p3,char a,char b)
{
	std::string s2;
	int n=b-a,x,p=p3;
	if(3==p1)
	{for(int i=0;i<n-1;i++)
		for(int j=0;j<p2;j++)
		{
			s2+='*';
		}
		}
	else{
	(1==p1)?x=0:x=32;
	if(a<58&&b<58){p=1;x=0;}
	switch(p)
	{case 1: for(int i=0;i<n-1;i++)
		 for(int j=0;j<p2;j++)
		{
			int q=a+i+1-x;
			char m=q;
			s2+=m;
		}
		break;
	case 2:
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<p2;j++)
		{
			int q=a-x+i+1;
			char m=q;
			s2+=m;
		}
		break;
	default : break;}
	}
	return s2;
}


void out(int p1,int p2,int p3,char ss[])
{
	std::string s1;
	int n=strlen(ss);
	for(int i=0;i<n;i++)
	{
		if('-'!=ss[i])s1+=ss[i];
		if('-'==ss[i])
		{
			int n=ss[i+1]-ss[i-1];
			if('-'==ss[i+1]){s1+='-';s1+='-';i++;}
			else
			{
				if(n<=25&&n>0)s1+=fill(p1,p2,p3,ss[i-1],ss[i+1]);
				else if(n<=0||n>=40)s1+='-';
				else if(1==n)s1+=ss[i+1];
			}
		}
	}
	std::cout << s1;
}

int main()
{
	using namespace std;
	char ss[1000];
	int p1,p2,p3;
	cin >> p1>> p2>> p3;
	cin >> ss;
	out(p1,p2,p3,ss);
	return 0;
}

