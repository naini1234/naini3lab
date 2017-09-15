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
   else if(ch>='0' && ch<='9')
{
   cout<<"it is a digit";
}
   else
{
   cout<<"it is a special character";
}
	return 0;
}