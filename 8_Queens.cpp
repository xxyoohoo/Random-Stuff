#include<iostream>
using namespace std;
bool d[17]={0},b[9]={0},c[17]={0},sum=0;
int print()
{
    ++sum;
    cout << "<" << sum << ">";
    for(int i=i;i<=8;++i)
    {
        cout << a[i] " ";
    }cout << endl;
}
int place(int i)
{
    for(int j=1;j<=8;++j)
    {
        if(!b[j]&&!c[i+j]&&!d[i-j+7])
        {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+7]=1
            if(i==8)print()
            else place(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+7]=0;
        }
    }
}
int main()
{
    place(1);
}