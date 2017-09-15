#include <iostream>
using namespace std;

int main() {
	int i=1,n,m;
	cout<<"enter the value of n\n";
	cin>>n;
	while(i<=10)
	{
		m=n*i;
		i=i+1;
		cout<<n<<'*'<<i-1<<'='<<m<<"\n";
	}
	
	return 0;
}