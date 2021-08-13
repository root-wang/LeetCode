#include<iostream>
struct hashtable
{
    int data;
    int flag;
};

int h(int data)
{
    return (3*data)%11;
}

hashtable *creathashtable(int data,int flag)
{
    hashtable *p;
    p=(hashtable *)malloc(sizeof(hashtable));
    p->data=data;
    p->flag=flag;
    return p;
}
void gethashtable(int data[],hashtable* t[])
{
    int pos,flag;
    for(int i=0;i<8;i++)
    {
        flag=1;
        pos=h(data[i]);
        while(NULL!=t[pos])
        {
            pos++;flag++;
        }
        t[pos]= creathashtable(data[i],flag);
    }
}
int main()
{
    int data[8]={22,41,53,46,30,13,01,67};
    hashtable* t[11];
    gethashtable(data,t);
    int i,sum;
     for(i=0,sum=0;i<11;i++)
    {
        if(NULL!=t[i])
        {
            sum+=t[i]->flag;
        }
    }
    std::cout << sum <<std::endl;
    return 0;
}