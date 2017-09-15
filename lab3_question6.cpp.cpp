#include <iostream>
using namespace std;

int main() {
	int a;
   cout<<"enter the year\n";
   cin>>a;
   if(a%4==0 && a%100!=0 || a%400==0)
{
   cout<<"it is a leap year";
}
   else
{
   cout<<"it is a regular year";
}
	return 0;
}