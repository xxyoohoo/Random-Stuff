#include<iostream>
using namespace std;

int main()
{
    int n,m,a[1001];
    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    a[0]=0;
    for(int i=1;i<=m;++i)
    {
        int x;
        int lft=1,rht=0,mid;
        rht=n;
        cin >> x;
        while(lft<=rht)
        {
            mid=(lft+rht)/2;
            if(a[mid]<=x)lft=mid+1;
            else rht=mid-1;
        }
        cout << a[rht] << endl;
    }
    return 0;
}
