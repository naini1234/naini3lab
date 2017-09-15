#include <iostream>
using namespace std;

int main() {
	int n,l,f,s;
	cout<<"enter any number\n";
	cin>>n;
	l=n%10;
	while(n>0)
	{
		f=n%10;
		n=n/10;
	}
	s=l+f;
	cout<<"the sum of first and last digit is "<<s;
	return 0;
}