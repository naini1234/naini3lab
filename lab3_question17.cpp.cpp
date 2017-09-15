#include <iostream>
#include<cmath>
using namespace std;

int main() {
	float a,b,c,r1,r2,D,re,img,i;
   cout<<"enter the coefficients of the quadratic equation\n";
   cin>>a>>b>>c;
   D=(b*b-4*a*c);
   if(D>0)
{
   r1=(-b+pow(D,0.5))/(2*a);
   r2=(-b-pow(D,0.5))/(2*a);
   cout<<"the roots are real and unequal\n";
   cout<<"r1="<<r1<<"\n";
   cout<<"r2="<<r2<<"\n";
}
   else if(D==0)
{
   r1=-b/(2*a);
   r2=-b/(2*a);
   cout<<"the roots are real and equal\n";
   cout<<"r1="<<r1<<"\n";
   cout<<"r2="<<r2<<"\n";
}
   else
{
   re=-b/(2*a);
   img=(pow(-D,0.5))/(2*a);
   cout<<"the roots are imaginary\n";
   cout<<"r1 ="<<re<<'+'<<img<<"i"<<"\n";
   cout<<"r2 ="<<re<<'-'<<img<<"i"<<"\n";
}
	return 0;
}