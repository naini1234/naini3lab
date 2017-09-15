#include <iostream>
using namespace std;

int main() {
	int a;
   cout<<"enter the week day number\n";
   cin>>a;
   if(a<1 || a>7)
{
   cout<<"it is invalid number";
}
   if(a==1)
{
   cout<<"it is sunday";
}
   else if(a==2)
{
   cout<<"it is monday";
}
   else if(a==3)
{
   cout<<"it is tuesday";
}
   else if(a==4)
{
   cout<<"it is wednesday";
}
   else if(a==5)
{
   cout<<"it is thursday";
}
   else if(a==6)
{
   cout<<"it is friday";
}
   else if(a==7)
{
   cout<<"it is saturday";
}
	return 0;
}