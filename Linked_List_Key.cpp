#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *tou,*p,*r;
void g(node*head,int i)
{
    node*p;
    int j;
    p=head->next;
    j=1;
    while((p!=NULL)&&(j<i))
    {
        p=p->next;
        j+=1;
    }
    if((p!=NULL)&&(j==i))
    {
        cout << p->data;
    }
    else
    {
        cout << "Not in existence";
    }
    
}
int main()
{
    //g(head, 3);
    int x,n;
    cin >> n;
    cout << "-----------"  << endl;
    cin >>x;
    tou=new node;
    r=tou;
while(x!=-1)
{
    p=new node;
    p->data=x;
    p->next=NULL;
    r->next=p;
    r=p;
    cin >> x;
}
    g(tou,n);
}
