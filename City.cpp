#include<iostream>
using namespace std;
int cty[9][9]={{0,0,0,0,0,0,0,0,0},
              {0,1,0,0,0,1,0,1,1},  // A
              {0,0,1,1,1,1,0,1,1},  // B
              {0,0,1,1,0,0,1,1,1},  // C
              {0,0,1,0,1,1,1,0,1},  // D
              {0,1,1,0,1,1,1,0,0},  // E
              {0,0,0,1,1,1,1,1,0},  // F
              {0,1,1,1,0,0,1,1,0},  // G
              {0,1,1,1,1,0,0,0,1}}; // H

int a[101],b[101];
bool s[9]={0};

int print(int d)
{
    cout << char(a[d]+64);
    while(b[d])
    {
        d=b[d];
        cout << "--" << char(a[d]+64);
    }
    
}

int doit()
{
    int head=0,tail=1;
    a[1]=1;
    b[1]=0;
    s[1]=1;
    do
    {
        head++;
        for(int i=1;i<=8;++i)
        {
            if(cty[a[head]][i]==0 && s[i]==0)
            {
                ++tail;
                a[tail]=i;
                b[tail]=head;
                s[i]=1;
                if(i==8)
                {
                    print(tail);
                    head=tail;
                    break;
                    
                }
            }
        }
        
    }while(head<tail);
}

int main()
{
    doit();
    return 0;
}
