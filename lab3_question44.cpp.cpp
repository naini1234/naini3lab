#include <iostream>
using namespace std;

int main() {
	int n,f=1,i=1;
	cout<<"enter any number\n";
	cin>>n;
	for(;i<=n;)
	{
		f=f*i;
		i=i+1;
	}
	cout<<"the factorial of n is "<<f;
	return 0;
}