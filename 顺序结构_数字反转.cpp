#include<bits/stdc++.h>
#include<cmath>

using namespace std;

char* fzchar1 (char* str);
char* fzchar2 (char* str);
char* fzchar3 (char* str);
char* fzchar4 (char* str);
int del_zero_right (char* str);
void check(char* str);
int i;
int main()
{
  char str[20] {};
  int str_length=strlen(str);
  int temp=0;
  cin >> str ;
  for(i=0;i<20;i++)
  {
  	if(str[i]=='.'||str[i]=='/'||str[i]=='%')
  	temp=1;
  }
  	if(temp)
  	check(str);
  	else 
  	{fzchar1(str);
  	int w= atoi(fzchar1(str));
  	cout << w <<endl;}
  	return 0;
}

void check(char* str)
{	
	int str_length=strlen(str);
	for(i=0;i<20;i++)
	{
		if(str[i]=='.')
		fzchar2(str);
		if(str[i]=='%')
		fzchar4(str);	
		if(str[i]=='/')
		fzchar3(str);
	}
}


char* fzchar1 (char* str)
{
	int str_length=strlen(str);
	char* temp=new char[str_length];
	strcpy(temp,str);
	char* ret=temp;
	char* p=temp+str_length-1;
	while(p>temp)
	{
		char t=*temp;
		*temp++=*p;
		*p--=t;
	}
	return ret;
}
char* fzchar2 (char* str)
{
	char left_char[10]={},right_char[10]={};
	int str_length=strlen(str);
	int temp=0;
	for(i=0;i<20;i++)
	{
		temp++;
		if(str[i]=='.')
		break;
	}
	for(i=0;i<temp-1;i++)
	{
		left_char[i]=str[i];
	}
	for(i=0;i<str_length-temp;i++)
	{
		right_char[i]=str[i+temp];
	}
	
	int t=atoi(fzchar1(left_char));
	cout << t;
	
	cout << '.';
	
	
	int q=del_zero_right(fzchar1(right_char));
	cout << q;
	return 0;
}
    //�������ֿ���ȥ�㣬����С������˼·��һ��������ǿ��ת�������ͣ���Ҳ������ת����������ȥ��ת����Ϊ��ת���������ַ����飬���ǽ�ת��������������µ����飬��Ҫ�����͵ĸ���λ��������ȡ������Ϊ���ѣ�������Ҫ���¿��Ƿ���ȥ��С�����ֵ��㣬��ô�����Ͱٷ����ͽ���ˡ�

int del_zero_right(char* str)
{
	int temp=0;
	for(i=0;i<10;i++)
	{
		if (str[i]=='0') 
		temp++;
		if(str[i]!='0')
		break;
	}
	fzchar1(str);
	int n = atoi(fzchar1(str));
	int t=pow(10,temp);
	n=n/t;
	return n;
}

char* fzchar3 (char* str)
{
	char left_char[10]={},right_char[10]={};
	int str_length=strlen(str);
	int temp=0;
	for(i=0;i<str_length;i++)
	{
		temp++;
		if(str[i]=='/')
		break;
	}
	for(i=0;i<temp-1;i++)
	{
		left_char[i]=str[i];
	}
	for(i=0;i<str_length-temp;i++)
	{
		right_char[i]=str[i+temp];
	}

	fzchar1(left_char);
	int t=atoi(fzchar1(left_char));

	cout << t;
	
	cout << '/';
	fzchar1(right_char);
	int q=atoi(fzchar1(right_char));
	cout << q;
	return 0;
}

char* fzchar4 (char* str)
{
	char new_char[10]={};
	int str_length=strlen(str);
	int temp=0;
	for(i=0;i<str_length;i++)
	{
		temp++;
		if(str[i]=='%')
		break;
	}
	for(i=0;i<temp-1;i++)
	{
		new_char[i]=str[i];
	}

	fzchar1(new_char);
	int t=atoi(fzchar1(new_char));
	cout << t;
	
	cout << '%'<< endl;
	return 0;
}

