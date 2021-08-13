#include<iostream>

int check(int num)
{
	int temp=0;
	if(num==1) return 0;
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

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	int j=0,n,cont=0,str[101],prime[101];
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> str[i];
		check(str[i]);
		if(check(str[i]))
		{
			cont++;
			prime[j++]=str[i];
		}
	}
	for(int i=0;i<cont;i++)
	{
		cout << prime[i] <<" ";
	}
	return 0;
}
