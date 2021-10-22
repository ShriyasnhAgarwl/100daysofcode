#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

};
Node *first;
void insert(int num,int pos)
{
    Node *p;
if(pos==0)
{
    Node *t =new Node();

    t->data=num;
    t->next=first;
    first=t;
    cout<<"Inserted";
}
else if(pos>0)
{
    p=first;
    for(int i=0;i<pos-1&&p;i++)
     p=p->next;
    if(p)
    {
        Node *t =new Node();
    t->data=num;
    t->next=p->next;
    p->next=t;
    cout<<"Inserted";
}
    
}
else 
{
    cout<<"Invalid";
}
}
void display(Node *p)
{
while(p!=NULL)
{
    cout<<p->data<<"\n";
    p=p->next;
}
}
int main()
{
     Node *first =NULL;
    Node *second=NULL;
    Node *third=NULL;
    Node *fourth =NULL;
    Node *fifth=NULL;
    Node *sixth=NULL;
    Node *seventh=NULL;

    first = new Node();
    second = new Node();
    third = new Node();
    fourth= new Node();
    fifth= new Node();
    sixth= new Node();
    seventh= new Node();

    first->data=5;
    first->next=second;

    second->data= 6;
    second->next =third;

    third->data= 7;
    third->next=fourth;

    fourth->data= 74;
    fourth->next = fifth;

    fifth->data =86;
    fifth->next=sixth;

    sixth->data=96;
    sixth->next=seventh;

    seventh->data= 56;
    seventh->next= NULL;
   
    int num,pos;
    cin>>num>> pos;
    display(first);
    insert(num,pos);
    display(first);
}