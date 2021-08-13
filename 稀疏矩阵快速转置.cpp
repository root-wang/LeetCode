#include<iostream>

struct tri
{
    int hang=-1;
    int lie=-1;
    int data=-1;
};

struct mat
{
    tri p[101] {};
    int n=-1;
    int m=-1;
    int len=-1;
};

mat x;
void zhuanzhi(int k)
{
    int num[101] {},place[101] {};
    mat y;
    y.n=x.m;
    y.m=x.n;
    for(int i=0;i<k;i++)
    {
        num[x.p[i].lie]++;
    }
    place[1]=1;
    for(int i=1;i<=x.m;i++)
    {
        place[i+1]=place[i]+num[i];
    }
    int l,q;
    for(int i=1;i<=k;i++)
    {
        l=x.p[i].lie; q=place[l];
        y.p[q].data=x.p[i].data;
        y.p[q].hang=x.p[i].lie;
        y.p[q].lie=x.p[i].hang;
        place[l]++;
    }
    for(int i=1;i<k;i++)
    {
        std::cout << y.p[i].hang << ' ' <<y.p[i].lie <<' ' << y.p[i].data <<std::endl; 
    }
}

void creatmax()
{
    std::cin >> x.n >> x.m;
    int k=1;
    while(1)
    {
        std::cin >> x.p[k].hang >>x.p[k].lie >> x.p[k].data;
        if(0==x.p[k].hang&&0==x.p[k].lie&&0==x.p[k].data)break;
        k++;
    }
    zhuanzhi(k);
}

int main()
{
    creatmax();
}
