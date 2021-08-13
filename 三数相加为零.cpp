#include<iostream>
#include <vector>
int sort(int a[],int n)
{
	int temp=0;
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		return *a;
}

void check(int* a,int n)
{
		//int b=sort(a,n);
		int temp=0;
		for(int j=0;j<n;j++)
		for(int i=j+1;i<n;i++)
		{
			if(0==a[j]+a[i])temp++;
		}
		std::cout << temp <<std::endl;
}

int main()
{
	std::vector<int> a;
	int num = 0,temp=0;
	while (std::cin >> num)
	{
		a.push_back(num);
		//temp++;
		if ( '\n' == std::cin.get())
		{
			break;
		}
	}
	temp=dysize(a) const;
	std::cout << temp <<std::endl;
	//check(a,n);
	return 0;
}




























