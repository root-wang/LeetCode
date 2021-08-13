#include<iostream>
int score[100][20]{};

using namespace std;
float jisuan(int arry[20],int m)
{
	int temp;
	float ave,maximum,minimum,sum=0;
	for(int i=0;i<m;i++)
		{
			sum+=arry[i];
		}
	for(int i=1;i<m;i++)
		{
			if(arry[i-1]>arry[i])
			{temp=arry[i];
			arry[i]=arry[i-1];
			arry[i-1]=temp;}
		}	
		maximum=arry[m-1];
	for(int i=1;i<m;i++)
		{
			if(arry[i-1]<arry[i])
			{temp=arry[i];
			arry[i]=arry[i-1];
			arry[i-1]=temp;}
		}	
		minimum=arry[m-1];
		ave=(sum-maximum-minimum)/(m-2);
 		return ave;
		
}

float max(int score[100][20],int n,int m)
{
	float b[100] {};
	for(int i=0;i<n;i++)
	{
		jisuan(score[i],m);
		b[i]=jisuan(score[i],m);
	}
		for(int i=1;i<n;i++)
		{
			if(b[i-1]>b[i])
			b[i]=b[i-1];
		}	
		return b[n-1];
}
int main()
{
	int n,m;
	float z;
	cin >> n >> m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			cin >> score[i][j];
		}	
		max(score,n,m);
		z=max(score,n,m);
		cout.setf(ios_base::fixed);
		cout.precision(2);
		cout << z << endl;
		return 0;
}
