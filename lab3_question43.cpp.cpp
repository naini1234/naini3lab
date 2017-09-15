#include <iostream>
using namespace std;

int main() {
	int n,i=1;
	cout<<"enter any number\n";
	cin>>n;
	cout<<"the factors of the number are\n";
	for(;i<=n;++i)
	{
		if(n%i==0)
		{
			cout<<i<<"\n";
		}
	}
	return 0;
}
