#include <iostream>
using namespace std;

int main() {
	int n,i,s=0;
	cout<<"enter any number\n";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		cout<<"the number is a perfect number";
	}
	else
	{
		cout<<"the number is not a perfect number";
	}
	return 0;
}