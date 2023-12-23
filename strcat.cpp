#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int al,bl,i,j;
    char a[41],b[21];
    fgets(b,20,stdin);
    fgets(a,20,stdin);
    al=strlen(a);
    bl=strlen(b);
    i=al-1;
    for(j=0;j<bl;++j)
    {
        a[i]=b[j];
        ++i;
    }
    for(i=0;i<al+bl;++i)
    {
        cout << a[i];
    }
}
