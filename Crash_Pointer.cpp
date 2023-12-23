#include<iostream>
using namespace std;
int main()
{
    int *p,a;
    p=0;
    cout << p << endl;
    p=&a;
    cout << p << endl;
    *p=20;
    cout << p << endl;
    for(int i=1;i<=100000;++i)
    {
        ++p;
    *p=666;
    cout << "P=" << p
    }
}
