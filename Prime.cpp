#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[100]={0},n,t=0;
bool b[100]={0};

int find(int);
bool prime(int,int);
int print();

int main()
{
    cin >> n;
    find(1);
    cout << "total:" << t;
}

int find(int k)
{
    for(int i=1;i<=n;++i)
    {
        if(prime(a[k-1],i)&& !b[i])
        {
            a[k]=i;
            b[i]=1;
            if(k==n) 
            {
                if(prime(a[n],a[1])) print();
            }else
                find(k+1);
            b[i]=0;
        }
    }
}

int print()
{
    t++;
    
    cout << '<' << t << "> ";
    for(int j=1;j<=n;++j)
    {
        cout << a[j]<<' ';
    }
    cout << endl;
}

bool prime(int x,int y)
{
    int k=2,i=x+y;
    while(k<=sqrt(i)&&i%k!=0)
    {
        ++k;
        
    }
    if(k>sqrt(i)) return 1;
    return 0;
}

