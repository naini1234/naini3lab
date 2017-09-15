#include <iostream>
using namespace std;

int main() {
	int i=1,n,s=0;
	cout<<"enter the value of n\n";
	cin>>n;
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	cout<<"the sum is"<<s<<"\n";
            return 0;
}