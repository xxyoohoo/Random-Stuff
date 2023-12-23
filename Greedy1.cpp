#include<iostream>
using namespace std;
int main()
{
    int s[100]={0},a[100]={0},n,i,r,m=0,j;
    cin >> n >> r;
    for(i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;++j)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    
    for(i=1;i<=n;++i)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    
    j=0;
    for(i=1;i<=n;++i)
    {
        ++j;
        if(j==r+1) j=1;
        s[j]+=a[i];
        m+=s[j];
    }
    cout << m;
}
