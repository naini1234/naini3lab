#include <iostream>
using namespace std;

int main() {
	int n,i,j,k,s=0,m=1;
	cout<<"enter any number\n";
	cin>>n;
	k=n;
	while(k!=0)
	{
		i=k%10;
		for(j=1;j<=i;j++)
		{
			m=m*j;
		}
		k=k/10;
		s=s+m;
		m=1;
	}
	if(s==n)
	{
		cout<<"the number is a strong number";
	}
	else
	{
		cout<<"the number is not a strong number";
	}
	return 0;
}