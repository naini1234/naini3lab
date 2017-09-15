#include <iostream>
using namespace std;

int main() {
	int n,i,j,c,s=0;
	cout<<"enter any number\n";
	cin>>n;
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
			s=s+i;
		}
	}
	cout<<"sum of primes is "<<s;
	return 0;
}