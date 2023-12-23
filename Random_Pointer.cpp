#include<iostream>
using namespace std;
int main()
{
    int a=100,b=34;
    int *p;
    p= &a;
    cout << p << endl;
    p=&b;
    cout << p;
}
