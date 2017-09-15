#include <iostream>
using namespace std;

int main() {
   int m;
   cout<<"enter the month number\n";
   cin>>m;
   if(m<1 || m>12)
{
   cout<<"it is an invalid number";
}
   if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
{
   cout<<"it has 31 days";
}
   if(m==2 || m==4 || m==6 || m==9 || m==11)
{
   cout<<"it has 30 days";
}
	return 0;
}