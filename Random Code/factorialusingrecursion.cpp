#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==0){
        return (1);
    }
    else
    return factorial(n-1)*n;
   
}
int main() {
	int t,n;
	cin>>t;
	while(t!=0)
	{
	    cin>>n;
	    int fact=factorial(n);
	    cout<<fact<<endl;
	    t--;
	}
	return 0;
}
