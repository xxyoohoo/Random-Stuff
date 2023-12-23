#include<iostream>
#include<cstdio>
using namespace std;
int u[7]={0,0,1,0,-1,0,0};
int w[7]={0,1,0,-1,0,0,0};
int q[7]={0,0,0,0,0,1,-1};
int n,m,v,desx,desy,desz,stx,sty,stz;
int h,t,x,z,y,a[51],b[51],c[51],pre[51];
char map[51][51][51];
int count=0;
bool f;
int print(int d)
{
    if(pre[d]!='.') print(pre[d]);
    count++;
}

int main()
{
    cin >>n >> m >> v;
    //cout << "n is" << n << "m is" << m;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=m;++j)
        {
            for(int k=1;k<=v;++k)
            {
                cin >> map[i][j][k];
                if(map[i][j][k]=='E')
                {
                    desx=i;desy=j;desz=k;
                }
                 if(map[i][j][k]=='S')
                {
                    stx=i;sty=j;stz=k;
                }
            }
        }
    }
    h=0;t=1;f=0;
    map[stx][sty][stz]='#';
    a[t]=stx;b[t]=sty;c[t]=stz;pre[t]='.';
    //cout << "Im @ before while" << endl;
    while(h!=t)
    {
        h++;
        for(int i=1;i<=4;++i)
        {
            x=a[h]+u[i];
            y=b[h]+w[i];
            z=c[h]+q[i];
            if(x>0&&x<=n&&y>0&&y<=m&&z>0&&z<=v&&(map[x][y][z]=='.'||map[x][y][z]=='S'||map[x][y][z]=='E'))
            {
                t++;
                //cout << "@ tail" << endl;
                a[t]=x;b[t]=y;c[t]=z;pre[t]=h;
                map[x][y][z]='#';
                if(x==desx&&y==desy&&z==desz)
                {
                    f=1;
                    print(t);
                    h=t;
                }
                
            }
        }
    }
    if(!f) cout << "Stuck Here";
    else cout << "Escaped In" << count <<"Minutes";
}
