#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    int dx[12]{-2,-2,-1,1,2,2,2,2,1,-1,-2,-2},
        dy[12]{-1,-2,-2,-2,-2,-1,1,2,2,2,2,1};
    int s[101][101],q[10000][4],x1,y1,x2,y2;
    memset(s,-1,sizeof(s));
    memset(q,0,sizeof(q));
    int h=0,t=1;
    q[1][1]=1;
    q[1][2]=1;
    q[1][3]=1;
    cin >> x1 >> y1 >> y2 >> x2; 
    while(h<t)
    {
        ++h;
        for(int i=0;i<=11;++i)
        {
            int x=q[h][1]+dx[x];
            int y=q[h][2]+dy[y];
            if(x>0&&y>0)
            {
                if(s[x][y]==-1)
                {
                    s[x][y]=q[h][3]+1;
                    ++t;
                    q[t][1]=x;
                    q[t][2]=y;
                    q[t][3]=s[x][y];
                    if(s[x1][y1]>0 && s[x2][y2]>0)
                    {
                        cout << s[x1][y1] << endl;
                        cout << s[x2][y2] << endl;
                        return 0;
                    }
                }
            }
        }
    }
}
