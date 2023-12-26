#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,x=2;
    for(i=100;i<=200;++i)
    {
        x=2;
        while(x<=floor(sqrt(i)))
        {
            x++;
        }
        if(x>floor(sqrt(i)))
        {
            cout << i << endl;
        }
    }
}
