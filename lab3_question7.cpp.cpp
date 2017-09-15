#include <iostream>
using namespace std;

int main() {
	char ch;
   cout<<"enter the character\n";
   cin>>ch;
   if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
{
   cout<<"it is an alphabet";
}
   else
{
   cout<<"it is not an alphabet";
}
	return 0;
}