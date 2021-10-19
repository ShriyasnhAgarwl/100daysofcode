#include<iostream>
using namespace std;
void fun(int A[], int n)
{
int i;
for(i=0;i<n;i++)
{
    cout<<A[i]+75<<" ";
}
}
int main()
{
int n;
cin>>n;
int A[n];
for(int i=0;i<n;i++)
{
    cin>>A[i];
}
fun(A,n);
}