#include<iostream>
using namespace std;
int main()
{
    int *p[6],m[6];
    for(int i=0;i<6;i++)
    {
        m[i]=50*i*i;
        p[i]=&m[i];
        
    }
    for(int i=0;i<6;i++)
    {
        cout<<*p[i]<<"\t";
    }
}