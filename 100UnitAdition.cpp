#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char a1[100],b1[100];
    int x=0,lena,lenb,lenc=1,a[100],b[100],c[100];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(a1);
    gets(b1);
    lena=strlen(a1);
    lenb=strlen(b1);
    for(int i=1;i<lena;++i) a[lena-i]=a1[i]-48;
    for(int i=1;i<lenb;++i) b[lenb-i]=b1[i]-48;
    while(lenc<=lena||lenc<=lenb)
    {
        c[lenc]=a[lenc]+b[lenc]+x;
        x=c[lenc]/10;
        c[lenc]%=10;
        lenc++;
    }
    c[lenc]=x;
    if(c[lenc]==0) lenc--;
    for(int i=lenc;i>=1;--i)
    {
        cout << c[i];
    }
        cout << endl;
    return 0;
}