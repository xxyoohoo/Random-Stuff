#include<iostream>
using namespace std;
int main()
{
    int a[100],m,n;
    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    a[0]=0;
    for(int i=1;i<=m;++i)
    {
        int x,l=1,r=0,mid;
        r=n;
        mid=(l+r)/2;
        cin >> x;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<=x) l=mid+1;
            else r=mid-1;
        }
        cout << a[r] << "   ";
    }
    cout << end/l;
} 
