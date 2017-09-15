#include <iostream>
using namespace std;

int main() {
	float a,b,c;
   cout<<"enter the sides of a triangle\n";
   cin>>a>>b>>c;
   if(a==b && a==c)
{
   cout<<"the triangle is equilateral";
}
   else if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
{
   cout<<"the triangle is isosceles";
}
   else
{
   cout<<"the triangle is scalene";
}
	return 0;
}