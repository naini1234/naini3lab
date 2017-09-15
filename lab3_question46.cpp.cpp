#include <iostream>
using namespace std;

int main() {
	int n1,n2,i,hcf,lcm;
	cout<<"enter any two numbers\n";
	cin>>n1>>n2;
	for(i=n1;i>0;i--)
	{
		if(n1%i==0&&n2%i==0)
		{
			hcf=i;
			break;
		}
	}
	lcm=n1*n2/hcf;
	cout<<"the lcm is "<<lcm;
	return 0;
}