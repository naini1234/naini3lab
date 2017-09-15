#include <iostream>
using namespace std;

int main() {
	float b,g,HRA,DA;
	cout<<"enter the basic salary of the employee\n";
	cin>>b;
	if(b<=10000)
	{
		HRA=0.2*b;
		DA=0.8*b;
	}
	else if(b<=20000)
	{
		HRA=0.25*b;
		DA=0.9*b;
	}
	else
	{
		HRA=0.3*b;
		DA=0.95*b;
	}
	g=b+HRA+DA;
	cout<<"the gross salary is"<<g<<"\n";
	return 0;
}