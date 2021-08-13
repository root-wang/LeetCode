#include<iostream>
#include<cstring>

int isprime(int num)
{
	int temp=0;
	if(1==num||0==num) return 0;
	else
	{
		for(int i=0;i<num-2;i++)
		{
			if(num%(i+2)==0)
			temp++;
		}
		if(temp==0)
		return 1;
		else return 0;
	}
}

void check(char a[])
{
	int max=0,min=100;
	int n=strlen(a);
	for(int j=0;j<n;j++)
	{	
		int temp=0;
		for(int i=0;i<n;i++)
		{
			if(a[j]==a[i])temp++;
		}
		if(temp>max)max=temp;
		if(temp<min)min=temp;
	}
	isprime(max-min);
	if(isprime(max-min)){std::cout << "Lucky Word" << std::endl;std::cout << max-min;}
	else {std::cout << "No Answer" << std::endl;std::cout << 0;}
}
int main()
{
	char a[100];
	std::cin >> a;
	check(a);
	return 0;
}
