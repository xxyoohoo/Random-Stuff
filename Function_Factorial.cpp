#include<iostream>
using namespace std;
unsigned long long f(int n)
{
    if(n==1)
    {
        return 1;
    }
    return f(n-1)*n;
}
int main()
{
    int n,i;
    //cin >> n;
    for(i=1;i<=22;++i)
    {
        if(i<=9)
        {
            cout << " " << i << " --> " << f(i) << endl;
        } else
        {
            cout << i << " --> " << f(i) << endl;
        }
    }
}
