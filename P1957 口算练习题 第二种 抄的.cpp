#include<bits/stdc++.h>

void check(int n,char k)
{
	using namespace std;
	string ss[n];
	for(int i=0;i<n;i++)
	{
		int a,b,ans=0;
		string st;
		stringstream io;
		if(!(cin>>a))
		{
			cin.clear();
			cin >> k >> a;
		}	
		cin >> b;
		io << a;io >> ss[i];io.clear();
	if(k=='a')
	{
		ans=a+b;
		ss[i]+='+';
		io << b;io >> st;io.clear();
		ss[i]+=st;	
		ss[i]+='=';
		io << ans;io >> st;io.clear();	
		ss[i]+=st;			
	}
	if(k=='b')
	{
		ans=a-b;
		ss[i]+='-';
		io << b;io >> st;io.clear();
		ss[i]+=st;	
		ss[i]+='=';
		io << ans;io >> st;io.clear();	
		ss[i]+=st;			
	}
	if(k=='c')
	{
		ans=a*b;
		ss[i]+='*';
		io << b;io >> st;io.clear();
		ss[i]+=st;	
		ss[i]+='=';
		io << ans;io >> st;io.clear();	
		ss[i]+=st;			
	}
	}
		for(int i=0;i<n;i++)
	{
		cout << ss[i] << endl;
		cout << ss[i].size() << endl;
	}
}

int main()
{
	int n;
	std::cin >> n;
	char k;	
	check(n,k);
	return 0;
}
