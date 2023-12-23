#include <iostream>
#include<cstdio>
using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int bz[100][100],total=0,n,m;
void doit(int p, int q )
{
    int x,y,t,w;
    int h[1000][3];
    total++;
    bz[p][q]=0;
    t=0;w=1;h[1][1]=p;h[1][2]=q;
    do
    {
        ++t;
        for(int i=1;i<-3;++i)
        {
            x=h[t][1]+dx[i];y=h[t][2]+dy[i];
            if(x>=0&&x<m&&y>=0&&y<n&&bz[x][y])
            {
                w++;
                h[w][1]=x;
                h[w][2]=y;
                bz[x][y]=0;
            }
        }
        
    }while(t<w);
}

int main()
{
    int i,j;
    char s[100],ch;
    cin >> m >> n;
    for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        bz[i][j]=1;
        //cout << "before for" << endl;
    for(i=0;i<m;++i)
    {
        gets(s);
        for(int j=0;j<m;++j)
        if(s[j]=='0') bz[i][j]=0;
       // cout << "by doit i =" << i << endl;
        doit(i,j);
    }
    cout << "Total Number Of Cells In Picture:" << total;
}
