#include<iostream>
using namespace std;
int t=0,n;
void m(int n,char a,char c,char b)
{
    if(n==0)return;
    m(n-1,a,b,c);
    t++;
    cout << t << "  " << a <<" to " << c << endl;
    m(n-1,b,c,a);
}
int main()
{
    cin>> n;
    m(n,'a','c','b');
}
