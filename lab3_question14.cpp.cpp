#include <iostream>
using namespace std;

int main() {
	float a,b,c;
   cout<<"enter the angles of a triangle\n";
   cin>>a>>b>>c;
   if(a+b+c==180)
{
   cout<<"the triangle is valid";
}
   else
{
   cout<<"the triangle is invalid";
}
	return 0;
}