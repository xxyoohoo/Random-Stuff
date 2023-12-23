#include<iostream>
using namespace std;
int main()
{
    int a[500][500],i,j,n;
    cin >> n;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            a[i][j]=0;   
        }
        a[i][i]=1;
        a[i][0]=1;
    }
    //cout << "first_part_done" << endl;
    cout  << '1' << endl;
    for(i=1;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            if(a[i][j]!=0) cout << a[i][j] << " ";
        }
        cout << endl;
    }
    //cout << "Second_part_done" << endl;

}
