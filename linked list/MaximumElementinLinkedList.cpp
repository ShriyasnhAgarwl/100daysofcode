#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int max(Node *p)
{
    int x=0;
    if(p==0)
      return INT_MIN;
    else
    {
        x=max(p->next);
        if(x>p->data)
         return x;
        return p->data; 

    }

}
int main()
{
    Node *first =NULL;
    Node *second=NULL;
    Node *third=NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data=5;
    first->next=second;

    second->data= 6;
    second->next =third;

    third->data= 7;
    third->next=NULL;

    cout<<max(first);
}