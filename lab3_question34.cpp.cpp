#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,l,f,x,y,k,m,i=0;
	cout<<"enter any number\n";
	cin>>n;
	x=n;
	y=n;
	l=n%10;
	while(n>0)
	{
		f=n%10;
		n=n/10;
	}
	while(x>0)
	{
		x=x/10;
		i=i+1;
	}
	k=y/10;
	m=(k%(int)pow(10,i-2));
	cout<<"the number formed after swapping first and last digits is "<<l<<m<<f;
	return 0;
}