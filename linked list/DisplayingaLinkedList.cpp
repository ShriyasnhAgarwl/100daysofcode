#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
     int data;
     Node *next;
};
void display(Node *p)
{
while(p!=NULL)
{
    cout<<p->data;
    p=p->next;
}
}
int main()
{
Node *head= NULL;
Node *second=NULL;
Node *third =NULL;

head =new Node();
second =new Node();
third= new Node();

head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=4;
third->next=NULL;

display(head);
}
