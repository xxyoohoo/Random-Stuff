#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n,m,total=0,bz[100][100]={1};
int doit(int p, int q)
{
    int x,y,w,t,h[1000][3];
    total++;bz[p][q]=0;
    cout << "total=" << total << endl;
    t=0;w=1;h[1][1]=p;h[1][2]=q;
    do
    {
        ++t;
        for(int i=0;i<=3;++i)
        {
            x=h[t][1]+dx[i];
            y=h[t][2]+dy[i];
            if((x>=0)&&(x<m)&&(y>=0)&&(y<n)&&(bz[x][y]==1))
            {
                w++;
                h[w][1]=x;
                h[w][2]=y;
                bz[x][y]=0;
           }
       }
    }while(t<w);
    cout << "tail=" << w << endl;
    return 0;
}


int main()
{
    char s[100]={'\0'};
    //cout << "input n m" << endl;
    
    scanf("%d %d\n", &n, &m);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            bz[i][j]=1;
        }
    }
    //cout << "n=" << n << " m=" << m;
    for(int i=0;i<n;++i)
    {
        //out << "reading line " << i << endl;
        gets(s);
        //printf("reading %d/%d '%s'\n", i, n, s);
        for(int j=0;j<m;++j)
        {
            if(s[j]=='0')bz[i][j]=0;
        }
    }
   // cout << "Finished" << endl;
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            //cout << "before if & j=" << j << endl;
            if(bz[i][j]==1) 
            {
                //cout << "before doit" << endl;
                doit(i,j);
            }
        }
    }
    cout << "Cells Counted:" <<total;
    return 0;
}
