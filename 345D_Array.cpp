#include<iostream>
using namespace std;
int a,b,c,d,e,f,i,j,k,ii,jj,an;
int main()
{
   cout << "Array Number:" << endl;
   cout << "(>=3 & <=5)";
   cin >>an;
   if (an==3)
    {
        cin >> a >> b >> c;
    for(i=1;i<=a;++i)
    {
        for(j=1;j<=b;++j)
        {
            for(k=1;k<=c;++k)
            {
                cout << "(" << i <<"," << j << "," << k << ")";
            }
            cout << endl;
            cout << endl;  
        }
    }
        return 0;
    }
    if(an==4)
    {
        cin >> a >> b >> c >> d;
    for(i=1;i<=a;++i)
    {
        for(j=1;j<=b;++j)
        {
            for(k=1;k<=c;++k)
            {
                for(ii=1;i<=d;++ii)
                {
                cout << "(" << i <<"," << j << "," << k << ")";
                }
            }
            cout << endl;
            cout << endl;  
        }
    }
    }
    if(an==5)
    {
        cin >> a >>b>>c>>d>>e;
        for(j=1;j<=b;++j)
        {
            for(k=1;k<=c;++k)
            {
                for(ii=1;i<=d;++ii)
                {
                    for(jj=1;jj<=e;++jj)
                    {
                        cout << "(" << i <<"," << j << "," << k << ")";
                    }
                }
            }
            cout << endl;
            cout << endl;  
        }
        return 0; 
        
    }
}
