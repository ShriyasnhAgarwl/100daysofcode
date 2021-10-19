#include <iostream>
using namespace std;
int main()
{
    
    int m=45;
    int *p;
    p= &m;
    cout<<*p<<endl;//when *p will be print then the value inside will be printed;
    cout<<p;//when p or &p printed then the adress it contains printed;
}