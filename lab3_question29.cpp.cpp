#include <iostream>
using namespace std;

int main() {
	int i=1,s=0,n;
	cout<<"enter the value of n\n";
	cin>>n;
	while(i<=n)
	{
		s=s+i;
		i=i+2;
	}
	cout<<"the sum of odd numbers upto n is "<<s<<"\n";
	return 0;
}