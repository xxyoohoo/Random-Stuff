#include<iostream>
using namespace std;
void Binary(int a,int n)
{
    if(a>=n)
    {
        Binary(a/n,n);
    }
    cout << a%n;
}
int main()
{
    int a,n;
    cout << "BINARY NUMBER: ";
    cin  >> a;
    cout <<": ";
    cin >> n;
    Binary(a,n);
}
