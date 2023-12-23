#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char n[256],n1[256],n2[256];
    int a[256],b[256],c[256],lena,lenb,lenc;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    gets(n1);
    gets(n2);
    if(strlen(n1)<strlen(n2)||strlen(n1)==strlen(n2)&&strcmp(n1,n2)<0)
    {
        swap(n1,n2);
        cout << "-";
    }
    lena=strlen(n1);
    lenb=strlen(n2);
    for(int i=0;i<lena;++i) a[lena-1]=int(n1[i]-'0');
    for(int i=0;i<lenb;++i) b[lenb-1]=int(n2[i]-'0');
    i=1;
    while(i<=lena||i<=lenb)
    {
        if(a[i]<b[i])
        {  a[i]+=10;
           a[i+1]--;
        }
    c[i]=a[i]+b[i];
    ++i;
    }
    lenc=i;
    while(c[lenc]==0&&(lenc>1))lenc--;
    for(i=lenc;i>=1;--i)cout << c[i];
    cout << endl;
    return 0;
}