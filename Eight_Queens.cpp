#include<iostream>
#include<iomanip>
using namespace std;
int total=0,a[9]={0};
bool d[17]={0},b[17]={0},c[17]={0};

int print()
{
    total++;
    cout << "<" << total << "> ";
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
            a[i]=j;
            c[i+j]=1;
            d[i-j+7]=1;
            if(i==8) print();
            else find(i+1);
            b[j]=0;
            a[i]=0;
            c[i+j]=0;
            d[i-j+7]=0;
        }
    }
}

int main()
{
    find(1);
    cout << "Total: " << total;
}
