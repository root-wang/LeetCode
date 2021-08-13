#include<iostream>
using namespace std;
int main()
{
    int year;
    cin>> year;
    bool check_Run=((0==year%4&&0!=year%100)||(0==year%400))?1:0;
    cout << check_Run;
    return 0;
}