#include <iostream>
using namespace std;

int main() {
	float cp,sp,p,l;
	cout<<"enter the cost price\n";
	cin>>cp;
	cout<<"enter the selling price\n";
	cin>>sp;
	if(sp-cp>0)
  {    
	p=sp-cp;
	cout<<"the profit is"<<p<<"\n";
  }	
    else if(sp-cp<0)
  {
	l=cp-sp;
	cout<<"the loss is"<<l<<"\n";
  }
    else
  {
	cout<<"there is no profit or loss\n";
  }    
	return 0;
  }