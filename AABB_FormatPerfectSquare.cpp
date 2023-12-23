#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j;
    for(i=11;i<=99;i+=11)
    {
        for(j=0;j<=99;j+=11)
        {
            int b=(i*100)+j;
            int a=floor(sqrt(b));
            if(a*a==b) cout << b<< endl;
        }
    }
    cout<<88*88;
}
