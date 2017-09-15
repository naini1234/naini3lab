#include <iostream>
using namespace std;

int main() {
	int a;
   cout<<"enter a number\n";
   cin>>a;
   if(a%5==0 && a%11==0)
{
   cout<<"a is divisible by 5 and 11";
}
   else
{
   cout<<"a is not divisible by 5 and 11";
}
	return 0;
}