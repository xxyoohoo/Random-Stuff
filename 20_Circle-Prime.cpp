#include<iostream>
#include<cmath>
using namespace std;

bool b[21]={0};
int a[21]={0},total=0;

void print()
{
    total++;
    cout << '<' << total << ">  ";
    for(int j=1;j<=20;++j)
    {
        cout << a[j]<< " ";
    }
    cout << endl;
}

bool prime(int x,int y)
{
    int k=2,i=x+y;
    while(k<=sqrt(i)&& (i%k!=0)) ++k;
    if(k>sqrt(i)) return 1;
    return 0;
}

void find(int t)
{
    for(int i=1;i<=20;++i)
    {
        // cout << "t= " << t << " i= " << i << endl;
        if(prime (a[t-1],i) &&(!b[i]))
        {
            a[t]=i;
            b[i]=1;
            if(t==20)
            {
                if(prime(a[20],a[1])) { print(); exit(-1); }
            }
            else
                find(t+1);
            b[i]=0;
        }
    }
}
int main()
{
    for (int i = 0; i < 21; ++i) { cout << a[i] << ' ' << b [i] << endl; }
    find(1);
    cout << total;
}
