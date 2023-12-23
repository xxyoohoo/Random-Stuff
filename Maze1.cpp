#include<iostream>
using namespace std;
int a[101][101]={0},m,n,ans=0;
int f(int i,int j)
{
    if(i==0) return 1;
    if(j==0) return 1;
    return f(i-1,j)+f(i,j-1);
}
int main()
{
    cin >> m >> n;
    cout << f(m,n) << endl;
}
