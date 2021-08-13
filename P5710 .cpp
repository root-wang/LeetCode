#include<iostream>
using namespace std;

int main()
{
    int n;
    bool a,b;
    cin >> n;
    a=(0==n%2)?1:0;
    b=(n>4&&n<=12)?1:0;
    bool A=a&&b;
    bool B= a||b;
    bool C=a^b;
    bool D=!(a||b);
    cout << A << ' ' << B << ' ' << C << ' ' << D << '\n';
    return 0;
}