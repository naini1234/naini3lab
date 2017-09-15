#include <iostream>
using namespace std;

int main() {
	char ch;
   cout<<"enter the alphabet\n";
   cin>>ch;
   if(ch>='a' && ch<='z')
{
   cout<<"it is a lowercase alphabet";
}
   else
{
   cout<<"it is an uppercase alphabet";
}
	return 0;
}