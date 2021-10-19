#include <iostream>
using namespace std;

int main() {
	int t, sum=0, number;
	cin>>t;
	while(t!=0)
	{
	    cin>>number;
	    while(number>=0)
	    {
	   sum=sum+(number%10);
	   number/=10;
	    }
	    cout<<sum<<endl;
	    t--;
	}
	return 0;
}
