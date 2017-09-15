#include <iostream>
using namespace std;

int main() {
	int n,i,j,k,l,m,s;
	cout<<"enter any number\n";
	cin>>n;
	cout<<"the strong numbers between 1 and n are ";
	for(i=1;i<=n;i++)
	{
		k=i;
		s=0;
		for(;k>0;j++)
		{
			j=k%10;
			m=1;
			for(l=1;l<=j;l++)
			{
				m=m*l;
			}
			k=k/10;
			s=s+m;
		}
		if(s==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}