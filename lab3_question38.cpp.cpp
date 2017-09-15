#include <iostream>
using namespace std;

int main() {
	int rev=0,r,n,k;
	cout<<"enter any number\n";
	cin>>n;
	k=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==k)
	{
		cout<<"the number is a palindrome";
	}
	else
	{
		cout<<"the number is not a palindrome";
	}
	return 0;
}