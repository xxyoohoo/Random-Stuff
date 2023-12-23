#include<iostream>
#include<iomanip>
using namespace std;
bool b[17]={0},c[17]={0},d[17]={0};
int sum=0,a[9];

int print()
{
    sum++;
    cout << "<" << sum << "> ";
    for(int i=1;i<=8;++i)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int find(int i)
{
    for(int j=1;j<=8;++j)
    {
        if(!b[j]&&!c[i+j]&&!d[i-j+7])
        {
            b[j]=1;
            c[i+j]=1;
            a[i]=j;
            d[i-j+7]=1;
            if(i==8) print();
            else find(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+7]=0;
            a[i]=0;
        }
        
        
    }
}
