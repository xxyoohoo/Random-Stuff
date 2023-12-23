#include<iostream>
using namespace std;
int n,m,a[51],b[51],map[51][51],desx,desy,stx,sty,tostep,step;
bool f;
int move(int x,int y,int start)
{
  map[x][y]=step;
  a[step]=x;
  b[step]=y;
  if(x==desx&&y==desy)
  {
      f=1;
      tostep=step;
      
  }else
  {
      if(y!=m&&map[x][y+1]==0)move(x,y+1,step+1);
      if((!f)&&(x!=n)&&(map[x+1][y]==0)) move(x+1,y,step+1);
      if((!f)&&(y!=1)&&(map[x][y-1]==0)) move(x,y-1,step+1);
      if((!f)&&(x!=1)&&(map[x-1][y]==0)) move(x-1,y,step+1);
  }
}

int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            cin >> map[i][j];
        }
    }
    cin >> stx >> sty;
    cin >> desx>>desy;
    f=0;
    move(stx,sty,1);
    if(f)
    {
        for(int i=1;i<=tostep;++i)
        {
            cout <<a[i] << ',' << b[i] << endl;
        }
    }
    else
    {
        cout << "Stuck Here" << endl;
    }
    
}
