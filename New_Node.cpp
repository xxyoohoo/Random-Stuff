#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head,*p,*r;
int x;
int main()
{
    cin >> x;
    head=new node;
    r=head;
    while(x!=-1)
    {
        p=new node;
        (*p).data=x;
        (*p).next=NULL;
        (*r).next=p;
        r=p;
        cin >> x;
    }
    p=head->next;
    while(p->next!=NULL)
    {
    cout << p->data << " ";
    p=p->next;
    }
}
