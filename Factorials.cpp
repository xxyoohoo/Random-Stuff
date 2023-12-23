#include<iostream>
using namespace std;
long long fact(int n)
{
    int t=1;
    if(n==1) return 1;
    return n*=fact(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
}
