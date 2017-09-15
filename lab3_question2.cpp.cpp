#include <iostream>
using namespace std;

int main() {
	int a,b,c;
   cout<<"enter three numbers\n";
   cin>>a>>b>>c;
   if(a>b && a>c)
{
   cout<<"a is maximum";
}
   else if(b>c && b>a)
{
   cout<<"b is maximum";
}
   else
{
   cout<<"c is maximum";
}
	return 0;
}