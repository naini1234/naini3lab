#include <iostream>
using namespace std;

int main() {
	int n,i=1,j;
	cout<<"enter any number\n";
	cin>>n;
	for(;i<=n;i++)
	{
		if(n%i==0)
		{
			j++;
		}
	}
	if(j==2)
	{
		cout<<"the number is a prime number";
	}
	else
	{
		cout<<"the number is not a prime number";
	}
	return 0;
}