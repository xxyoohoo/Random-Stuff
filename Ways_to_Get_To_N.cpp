#include<iostream>
using namespace std;
int a[100]={1},n;
int print(int x)
{
    cout << n << '=';
    for(int j=1;j<=x-1;++j)
    {
        cout << a[j] << '+';
    }
    cout << a[x] << endl;
}
int find(int s, int t)
{
    for(int i=a[t-1];i<=s;++i)
    {
        if(i<n)
        {
            a[t]=i;
            s-=i;
            if(s==0) print(t);
            else find(s,t+1);
            s+=i;
        }
    }
}

int main()
{
    cin >> n;
    find(n,1);
}
