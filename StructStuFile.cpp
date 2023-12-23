#include<iostream>
#include<fstream>
using namespace std;
struct stu
{
    string name;
    int math,sci,total,chinese;
}a[101];
int main()
{
   //s FILE *fin,*fout;
    ifstream fin ("in3.txt");
    ofstream fout ("out3.txt");
    int n,i,j;
    fin >> n;
    for(i=1;i<=n;++i)
    {
        fin >> a[i].name;
        fin >> a[i].sci;
        fin >> a[i].math;
        fin >> a[i].chinese;
        a[i].total= a[i].math+a[i].sci+a[i].chinese;
    }
    
    for(i=1;i<=n-1;++i)
    {
        for(j=1;j<=n-1;++j)
        {
            if(a[j].total<a[j+1].total)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(i=1;i<=n;++i)
    {
        fout <<a[i].name << " " << a[i].sci << " " << a[i].math << " " << a[i].chinese << " "<< a[i].total << endl;
    }
}
