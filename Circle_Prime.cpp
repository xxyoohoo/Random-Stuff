#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int find(int);
bool p(int,int);

bool b[100]={0};

int total=0,a[100]={0};
int n = 0;

int main()
{
    cin >> n;
    find(1);
    cout << total << endl;
}

bool prime(int x,int y)
{
    int k=2;
    int i=x+y;
    while(k<=sqrt(i)&& i%k!=0) k++;
    if(k>sqrt(i)) return 1;
    else return 0;
}

int print()
{
    total++;
    cout << '<' << total << "> ";
    for(int j=1;j<=n;++j)
    {
        cout << a[j] << ' ';
    }
    cout << endl;
}

int find(int t)
{
    for(int i=1;i<=n;++i)
    {
        if(prime(a[t-1],i)&&(!b[i]))
        {
        a[t]=i;
        b[i]=1;
        if(t==n)
        {
            if(prime(a[n],a[1])) print();   
        }
        else find(t+1);
        b[i]=0;
        }
        
    }
    
}
