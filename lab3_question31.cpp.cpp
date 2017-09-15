#include <iostream>
using namespace std;

int main() {
	int i=0,n;
	cout<<"enter any number\n";
	cin>>n;
	while(n>0)
	{
		n=n/10;
		i=i+1;
	}
	cout<<"the number of digits are "<<i;
	return 0;
}