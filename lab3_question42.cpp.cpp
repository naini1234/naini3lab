#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int b,i=1;
	float p=1,e;
	cout<<"enter the base\n";
	cin>>b;
	cout<<"enter the exponent\n";
	cin>>e;
	for(;i<=e;)
	{
		p=p*b;
		i++;
	}
	cout<<"the power of the number is "<<p;
	return 0;
}