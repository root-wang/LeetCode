#include<iostream>
struct node
{
    int row=-1;
    int col=-1;
    int val=0;
};

struct max
{
    node t[10001];
    int n=-1,m=-1;
    int len=0;
}max1,max2,max3;

void creatmax(max x)
{
    for(int i=1;i<=3;i++)
    {
        std::cin >> x.t[i].row >>x.t[i].col>>x.t[i].val;
    }
}

void copy(max* max3,int hang,int lie,int data)
{   
    max3->len++;
    max3->t[max3->len].row=hang;
    max3->t[max3->len].col=lie;
    max3->t[max3->len].val=data;
}
void add(max* list1,max* list2,max* list3)
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

int main()
{
    int n,m,len1,len2,a,b,c;
    std::cin >>n >>m >>max1.len>>max2.len;
    //creatmax(max1);
    //creatmax(max2);
    for(int i=0;i<max1.len;i++)
	{
	  std::cin >> a >> b >> c;
	 
	  copy(&max1,a,b,c);
	}
	for(int i=0;i<max2.len;i++)
	{
	  std::cin >> a >> b >> c;
	  copy(&max2,a,b,c);
	}
    add(&max1,&max2,&max3);
      for(int k=1;k<=max3.len;k++)
    {
        std::cout << max3.t[k].row << ' ' << max3.t[k].col << ' ' << max3.t[k].val << std::endl;
    }
    return 0;
}