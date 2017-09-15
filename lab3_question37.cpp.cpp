#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n,rev=0,r;
	cout<<"enter any number\n";
	cin>>n;
	while(n>0)
	{
	      r=n%10;
	      rev=rev*10+r;
	      n=n/10;
	}
	cout<<"the number formed by reversing the digits is "<<rev;
	return 0;
}