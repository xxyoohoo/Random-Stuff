#include<iostream>
using namespace std;
int main()
{
    int day,i;
    cout <<"Days: ";
    cin >> day;
    int year = day / 365;
    int mnth = (day % 365) / 30;
    int day2 =(day%365)%30;
    cout << "Years:" << year << endl;
    cout << "Months:" << mnth << endl;
    cout << "Days:" << day2 << endl;
    
}
