#include<iostream>
#include<cmath>
struct list
{
	int a[100];
	char x;
	int l;
	int ans;
	int temp=0;
};

list list1[100];
int m=0;

int check(int q)
{	
	int n=0;
	if(q<0){q=-q;n=1;}
	while(q>=10)
	{
		q/=10;
		n++;
	}
	return n+1;
}

void check(int a[100],char k)
{
	if(k!='a'&&k!='b'&&k!='c')
	{	
		check(a[0]);
		int n=check(a[0]);
		k=int(k-'0');
		list1[m].a[1]=a[1];
		list1[m].a[0]=k*pow(10,n)+a[0];
		if(1==list1[m-1].temp)k='a';
		if(2==list1[m-1].temp)k='b';
		if(3==list1[m-1].temp)k='c';
	}
	else
	{
		list1[m].a[0]=a[0];
		list1[m].a[1]=a[1];
		list1[m].x=k;
	}
		if(k=='a')list1[m].temp=1;
		if(k=='b')list1[m].temp=2;
		if(k=='c')list1[m].temp=3;
	    if(k!='a'&&k!='b'&&k!='c')list1[m].temp=4;		
		switch(list1[m].temp)
		{
		case 1:
			list1[m].x='+';list1[m].ans=list1[m].a[0]+list1[m].a[1];list1[m].l=2+check(list1[m].a[0])+check(list1[m].a[1])+check(list1[m].ans);
				break;
		case 2:
			list1[m].x='-';list1[m].ans=list1[m].a[0]-list1[m].a[1];list1[m].l=2+check(list1[m].a[0])+check(list1[m].a[1])+check(list1[m].ans);
				break;
		case 3:
			list1[m].x='*';list1[m].ans=list1[m].a[0]*list1[m].a[1];list1[m].l=2+check(list1[m].a[0])+check(list1[m].a[1])+check(list1[m].ans);
				break;
		}
		m++;
}

void put(list list1[],int n)
{
	for(int k=0;k<n;k++)
	{
	 	std::cout << list1[k].a[0]<< list1[k].x << list1[k].a[1] << "=" << list1[k].ans <<std::endl;
	 	std::cout << list1[k].l<< std::endl;
	 }
}

int main()
{
	char k;
	int a[100],n;
	std::cin >> n;
	for(int i=0;i<n;i++)
	{
		std::cin>>k;
		for(int i=0;i<2;i++)
		{
			std::cin >> a[i];//严重BUG：无字母输入时，第一位数字必须是大于两位的数字，不然会使得a[1]没有办法输入，则无法继续，如果在加入判断就会使得代码更冗余，跟屎山一样，换个数据结构，自定义的结构体也不太好，太简单了。
		}
		check(a,k);
	}
	put(list1,n);
	return 0;
}





//90
