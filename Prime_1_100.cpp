#include<iostream>
using namespace std;

int main()
{
    int j,i;
    bool b[101];

    for(i=1;i<=101;++i)
    for(j=2;j<=100;++j)
    {
        if(b[i]==true)
        {
            for(j=i*2;j<=100;j+=i) {b[j]=false;}
        }
    }
    for(i=1;i<=100;++i)
    {
        if(b[i]==true) cout << i <<" ";
    }
}

