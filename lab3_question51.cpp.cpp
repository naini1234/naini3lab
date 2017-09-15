#include <iostream>
using namespace std;

int main() {
	int n,k,i,s=0;
	cout<<"enter any number\n";
	cin>>n;
	k=n;
	while(k!=0)
	{
		i=k%10;
		s=s+i*i*i;
		k=k/10;
	}
	if(n==s)
	{
		cout<<"the number is an armstrong number";
	}
	else
	{
		cout<<"the number is not an armstrong number";
	}
	return 0;
     }