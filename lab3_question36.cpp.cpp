#include <iostream>
using namespace std;

int main() {
	int n,i,p=1;
	cout<<"enter any number\n";
	cin>>n;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		p=p*i;
	}
	cout<<"the product of digits is "<<p;
	return 0;
}