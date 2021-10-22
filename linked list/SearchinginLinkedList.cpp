#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
};
/*Node* searching (Node *p, int key1)
{
    while(p!=NULL)
    {
        if(p->data==key1)
        {
            return p;
        }
        p =p->next;
    }
    return 0;
} */ //Simple Funnction


/* Node* searching(Node *p,int key1)
{
    if (p!=NULL)
    {
        if(p->data==key1)
          return p;
          else
        {
            return searching(p->next,key1);
        }
    }
    return 0;
}*/  //My Recurcive Funtion 

Node *searching(Node* p ,int key1)
{
    Node *q=NULL;
    q=p;
    Node *head= p;
    while(p!=NULL)
    {
        if(key1 ==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;
        }
        p=p->next;
    }
    return head;
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
    int key;
    cin>>key;
    cout<<searching(first,key);

}