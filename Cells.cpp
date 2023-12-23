#include<iostream>
using namespace std;
int dx[4]={-1,0,1,0},
    dy[4]={0,1,0,-1};
int bz[100][100],total=0,n,m;
int doit(int p, int q)
{
    int x,y,t,w,i;
    int h[1000][3];
    total++; bz[p][q]=0;
    t=0; w=1; h[1][1]=p; h[1][2]=q;
    do
    {
     ++t;
     for(int i=1;i<=3;++i)
     {
         x=h[t][1]+dx[i];y=h[t][2]+dy[i];
         if(x>=0 && x<m && y>=0 && y<n && bz[x][y])
         {
             w++;h[w][1]=x;
             h[w][2]=y;
             bz[x][y]=0;
         }
     }   
    }while(t<w);
}

int main()
{
    char s[100],ch;
    cin >> m >> n;
    for(int i=0;i<m;++i)
        for(int j=0;j<m;++i)
        bz[i][j]=1;
    for(int i=0;i<m;++i)
    {
        gets(s);
        for(int j=0;j<m;++j)
        if(s[j]=='0')
        doit(i,j);
    }
    cout << "Cells:" << total;
}
