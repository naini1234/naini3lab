#include <iostream>
using namespace std;

int main() {
	 int n,i,j,k,s;
	cout<<"enter any number\n";
	cin>>n;
	cout<<"the armstrong numbers between 1 and n are ";
	for(j=1;j<=n;j++)
	{
		s=0;
		k=j;
		while(k!=0)
		{
			i=k%10;
			s=s+i*i*i;
			k=k/10;
		}
		if(s==j)
		{
			cout<<j<<" ";
		}
	}
	return 0;
}