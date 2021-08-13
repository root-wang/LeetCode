#include<iostream>

using namespace std;

struct san
{
	int row;
	int col;
	int val;
};

struct sanlist
{
	san t[10000];
	int m;
	int n;
	int len;
};

void inti(sanlist *list)
{
	list->m=100;
	list->n=100;
	list->len=0;
}
void copy(sanlist* list,int row,int col,int val)
{
	 list->len++;	
	 list->t[list->len].row=row;
	 list->t[list->len].col=col;
	 list->t[list->len].val=val;  
}

void add(sanlist* list1,sanlist* list2,sanlist* list3)
{
 int i=1,j=1;
	while(i<=list1->len&&j<=list2->len)
	{
		if(list1->t[i].row<list2->t[j].row)
				{
					copy(list3,list1->t[i].row,list1->t[i].col,list1->t[i].val);
					i++;
				}
		else if(list1->t[i].row==list2->t[j].row)
				{
					if(list1->t[i].col<list2->t[j].col)
					{
					 copy(list3,list1->t[i].row,list1->t[i].col,list1->t[i].val);
					 i++;
					}
					else if(list1->t[i].col>list2->t[j].col)
					{
					  copy(list3,list2->t[j].row,list2->t[j].col,list2->t[j].val);
					j++;
					}
					else
					{
						if(list1->t[i].val+list2->t[j].val!=0)
						 {
							copy(list3,list2->t[j].row,list2->t[j].col,list2->t[j].val+list1->t[i].val);
							i++;
							j++;
						 }
				 }
				}
			else
			{
				copy(list3,list2->t[j].row,list2->t[j].col,list2->t[j].val);
				j++;
			}
	}
	while(i<=list1->len)
	{
		copy(list3,list1->t[i].row,list1->t[i].col,list1->t[i].val);
		i++;
	}
	while(i<=list2->len)
	{
		copy(list3,list2->t[j].row,list2->t[j].col,list2->t[j].val);
		j++;
	}
}

void put(sanlist* list)
{
	int i=1;
	for(i=1;i<=list->len;i++)
	{
		cout << list->t[i].row << ' ' << list->t[i].col << ' ' << list->t[i].val <<endl; 
	}
}

void run()
{
	int m, n, len1, len2,i=0,a,b,c;
	sanlist list1,list2,list3;
	inti(&list1);
	inti(&list2);
	inti(&list3);
	cin >> m >> n >> len1 >> len2;
	for(i=0;i<len1;i++)
	{
	  cin >> a >> b >> c;
	 
	  copy(&list1,a,b,c);
	}
	for(i=0;i<len2;i++)
	{
	  cin >> a >> b >> c;
	  copy(&list2,a,b,c);
	}	
	add(&list1,&list2,&list3);
	put(&list3);
}

int main()
{
	run();
	return 0;
}


