#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int sum(Node *p)
{
    if(p==NULL)
     return 0;
    return sum(p->next)+p->data;

}
int main()
{
    Node *first= NULL;
    Node *second =NULL;
    Node *third= NULL;

    first =new Node();
    second =new Node();
    third = new Node();
     
     first->data=5;
     first->next =second;

     second->data =4;
     second->next =third;

     third ->data =6;
     third->next =NULL;

     cout<<sum(first);
   
    
}