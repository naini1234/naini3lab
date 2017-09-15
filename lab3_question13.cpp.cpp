#include <iostream>
using namespace std;

int main() {
	int amt,tt,fh,h,f,tw,t;
   cout<<"enter the amount\n";
   cin>>amt;
   while(amt>=2000)
{
   tt=amt/2000;
   amt=amt%2000;
   cout<<"the number of 2000rs notes is"<<tt<<"\n";
}
   while(amt>=500)
{
   fh=amt/500;
   amt=amt%500;
   cout<<"the number of 500rs notes is"<<fh<<"\n";
}
   while(amt>=100)
{
   h=amt/100;
   amt=amt%100;
   cout<<"the number of 100rs notes is"<<h<<"\n";
}
   while(amt>=50)
{
   f=amt/50;
   amt=amt%50;
   cout<<"the number of 50rs notes is"<<f<<"\n";
}
   while(amt>=20)
{
   tw=amt/20;
   amt=amt%20;
   cout<<"the number of 20rs notes is"<<tw<<"\n";
}
   while(amt>=10)
{
   t=amt/10;
   cout<<"the number of 10rs notes is\n"<<t;
}
	return 0;
}