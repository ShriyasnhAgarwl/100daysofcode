#include<iostream>
using namespace std;
int main()
{
    int m=1;
    int  *p = &m;
    int *x=p;
    cout<<++x; //increment in pointer
    cout<<--x;//decreament in pointer
    
}