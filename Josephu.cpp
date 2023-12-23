#include<iostream>
using namespace std;
int main()
{
    bool a[101]={false};
    int n,m;
    cin >> n >> m;
    int f=0,t=0,s=0;//f count how many out //s every m people // t=place of number
    do
    {
        ++t;
            if(t==n+1)t=1;//a circle you start over with 1
        if(a[t]==false)++s; //every m switch
            if(s==m)// out of circle
        {
                s=0;//restart every m
            cout << t << " ";
                a[t]= true;// out
            ++f;//count out
        }
    }while(f!=n);
}
