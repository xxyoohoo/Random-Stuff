#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    FILE* fin, * fout;
    fin=fopen("in.txt","r");//open a file called in ,read it
    
    int a, b;
    fscanf(fin, "%d %d", &a, &b);// cin 
    cout << "I read " << a << " " << b << " pages" << endl;
    printf("I read %d %d pages\n", a, b);
    fprintf(stdout, "I read %d %d pages\n", a, b);
    
    fout=fopen("out.txt","a");
    fprintf(fout,"hello Arianna - Me %%d %d %c %s %s \n",100, '?', "abc","My Birthday is 11/7");
    
    fclose(fout);
    fclose(fin);
    
    
    
}

