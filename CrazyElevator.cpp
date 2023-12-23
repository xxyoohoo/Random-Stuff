#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int head=0,tail=1,end,n,st,a[200],d[200][3],bz[200],c[2]={-1,1};
    memset (d,0,sizeof(d));
    memset (bz,0,sizeof(bz));
    cout << "Levels:" << endl;
    cin >> n ;
    cout << "Start:" << endl;
    cin >> st;
    cout << "Ending:" << endl;
    cin  >> end;
    if(n==end)
    {
        cout << '0' << endl;
        return 0;
    }
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    d[1][1]=st;
    d[1][2]=0;
    bz[st]=1;
    head=0;tail=1;
    while(head<tail)
    {
        head++;
        for(int t=0;t<=1;++t)
        {
            int k;
            k=d[head][1]+a[d[head][1]]*c[t];
            if(k>=1 && k<=n)
            {
                ++tail;
                d[tail][1]=k;
                d[tail][2]=d[head][2]+1;
                //cout << "Test1" << endl;
                if(bz[k]==0)
                {
                    //cout << "Test2" << endl;
                    bz[k]=1;
                    if(k==end)
                    {
                        //cout << "Test3" << endl;
                        cout << "\"Presses\" "<< d[tail][2] << endl;
                        head=tail;
                    }
                }
            }
        }
    }
    return 0;
}
