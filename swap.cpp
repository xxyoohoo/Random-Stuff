#include<iostream>
using namespace std;
int main()
{
    int n,j,a[100],i,x;
    cin >> n;
    cout  << endl;
    for(i=1;i<=n;++i)
    {
        a[i]=i;
        cout << a[i] <<" ";
    }cout << endl;
    for(i=1;i<n;++i)
    {
        x=a[1];
        for(j=1;j<n;++j)
        {
            a[j]=a[j+1];
            cout << a[j] <<" ";
        }    
        a[n]=x; 
        cout << a[n] << endl;   
    }
        
}
