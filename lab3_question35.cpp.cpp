#include <iostream>
using namespace std;

int main() {
	int i,s=0,n;
	cout<<"enter any number\n";
	cin>>n;
	while(n>0)
	{
		i=n%10;
		n=n/10;
		s=s+i;
	}
	cout<<"the sum of digits is "<<s;
	return 0;
}