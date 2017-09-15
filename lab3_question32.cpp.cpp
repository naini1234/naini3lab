#include <iostream>
using namespace std;

int main() {
	int l,f,n;
	cout<<"enter any number\n";
	cin>>n;
	l=n%10;
	while(n>0)
	{
		f=n%10;
		n=n/10;
	}
	cout<<"the first digit is "<<f<< " and the last digit is "<<l; 
	return 0;
}