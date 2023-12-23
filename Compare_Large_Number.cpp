#include<iostream>
using namespace std;
int main()
{
    int n,i,a[101],big,x;
    cin >> n;
    
    for(i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    
    big=a[1];
    x=1;
    for(i=2;i<=n;++i)
    {
        if(a[i]>big) {big=a[i];x=i;k}
    }
    cout << x;
}
