#include <iostream>
using namespace std;

int main() {
	int i=2,s=0,n;
	cout<<"enter the value ofn\n";
	cin>>n;
	while(i<=n)
	{
		s=s+i;
		i=i+2;
	}
	cout<<"the sum of even numbers upto n is "<<s<<"\n";
	return 0;
}