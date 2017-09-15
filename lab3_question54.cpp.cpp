#include <iostream>
using namespace std;

int main() {
	int n,s,i,j;
	cout<<"enter any number\n";
	cin>>n;
	cout<<"the perfect numbers between 1 and n are ";
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}	
	            if(s==i)
	            {
		            cout<<i<<" ";
	            }
	}
	return 0;
}