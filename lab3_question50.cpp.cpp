#include <iostream>
using namespace std;

int main() {
	int n,i,j,c;
	cout<<"enter any number\n";
	cin>>n;
	cout<<"the prime factors are ";
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c=2;
				break;
			}
		}
		if(c==0 && n!=0)
		{
			if(n%i==0)
			{
				cout<<i<<" ";
			}
		}
	}
	return 0;
}