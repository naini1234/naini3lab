#include <iostream>
using namespace std;

int main() {
	int n1,n2,hcf,i;
	cout<<"enter any two numbers\n";
	cin>>n1>>n2;
	for(i=n1;i>0;i--)
	{
		if(n1%i==0&&n2%i==0)
		{
			hcf=i;
	                        cout<<"the hcf is "<<hcf;
	                        break;
		}
	}
	return 0;
}