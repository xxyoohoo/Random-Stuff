#include<iostream>
using namespace std;
int main()
{
    int i=1,j=2;
    bool a[101]={0};
    for(i=1;i<=100;++i)
    {
        for(j=2;j<=100;++j)
        {
            if(i%j==0)
            {
            a[i]=!a[i];
            }
        }
    }
    for(i=1;i<=100;++i)
    {
        if(a[i]==0)
        {
            cout << i <<" ";
        }
    }
}
