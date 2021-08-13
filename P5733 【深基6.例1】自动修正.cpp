#include<iostream>
#include <cstring>

void check(char* a)
{
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		a[i]=a[i]-32;
	}
	for(int i=0;i<n-1;i++)
	{
	std::cout << a[i];
	}
	std::cout << a[n-1]<< std::endl;
}

int main()
{
	char a[1000];
	std::cin >> a ;
	check(a);
	return 0;
}
