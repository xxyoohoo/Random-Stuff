#include<iostream>
#include<cmath>
using namespace std;
int a[100]={0},n,m,c[100]={0},total,sum=0;
bool b[100]={0};

void print ()
{
    total++; 
    cout << "<" << total << "> ";
    for(int i=1;i<=n;++i)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}

 bool prime(int x,int y)
{
    
    int i=x+y,k=2;
    while(k<=sqrt(i)&&i%k!=0)
    {
        ++k;
    }
    if(k>sqrt(i)) 
    {
        return 1;
    }
    return 0;
}

void search(int s, int t)
{
    for(int i=1;i<=m;++i)
    {
        if(prime(a[i],sum)&&i<m)
        {
            s+=a[i];
            c[t]=a[i];
            if(t==n &&prime(s,0))
            {
                print();
            }
            else search(s,t+1);
            s=0;
            
        }
    }
}

int main()
{
    cin >> m >> n;
    for(int i=1;i<=m;++i)
    {
        cin >> a[i];
    }
    search(0,1);
    cout << endl;
    cout << endl;
    cout << "Total:" << total;
}
