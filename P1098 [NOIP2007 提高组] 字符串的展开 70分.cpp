#include<iostream>
#include<string>

std::string check(int p1,int p2,int p3,char a,char b,std::string ss)
{
	std::string s1;
	int n=b-a,x;
	(1==p1)?x=0:x=32;
	if(1==p3&&3!=p1)
	{for(int i=0;i<n-1;i++)
		for(int j=0;j<p2;j++)
		{
			int q=a+i+1-x;
			char m=q;
			s1+=m;
		}
		ss+=s1;
	}
	else if(2==p3&&3!=p1)
	{
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<p2;j++)
		{
			int q=a-x+i+1;
			char m=q;
			s1+=m;
		}
		ss+=s1;
	}
	if(3==p1)
	{for(int i=0;i<n-1;i++)
		for(int j=0;j<p2;j++)
		{
			s1+='*';
		}
		ss+=s1;
		}
	return ss;
}

void put(int p1,int p2,int p3)
{
	char k,temp;
	int n,l=0,o=0;
	std::string ss;
	std::cin >>k;
	ss=k;n=k;temp=k;if('-'==k)l=1;
	while('\n'!=(k=std::cin.get()))
	{
	if('-'!=k)
	{ss+=k;n=k;temp=k;}
	else if('-'==k)
	{	
		if(l) o=1;
		k=std::cin.get();
		if(int(k)-n>1&&((int(k)-n<10)||(int(k)-n<26)))
		{
			check(p1,p2,p3,temp,k,ss);
			ss=(check(p1,p2,p3,temp,k,ss)+k);
			n=k;temp=k;
		}
		else if(int(k)-n<=0||int(k)-n>39){ss+='-';ss+=k;n=k;temp=k;}
		else if(1==int(k)-n){ss+=k;n=k;temp=k;}
		
	}
	}
	if(!o)
	std::cout <<ss<< std::endl;
	if(o)
	{ss='-'+ss;
	std::cout <<ss<< std::endl;}
}


int main()
{
	int p1,p2,p3;
	std::cin >> p1>>p2 >>p3;
	put(p1,p2,p3);
	return 0;
}
