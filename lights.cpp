#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,a[5001],c=0;
    cin >> n >> m;
    for(i=1;i<=n;++i)
    {
        a[i]=0;
    }
    for(j=1;j<=m;++j)
    {
        for(i=1;i<=n;++i)
        {
            if(i%j==0)
            {
                a[i]=!a[i];
            }
        }
    }
    for(i=1;i<=n;++i)
    {
        if(a[i]==1 && c==0)
        {
            cout << i;
            ++c;
        }
        else if(a[i]==1 && c>=1)
        {
            cout << ',' << i;
            ++c;
        }
    }
}