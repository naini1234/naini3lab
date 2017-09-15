#include <iostream>
using namespace std;

int main() {
	float p,c,b,m,comp,s,per;
	cout<<"enter marks of physics,chemistry,biology,maths and          computer(out of 100)\n";
	cin>>p>>c>>b>>m>>comp;
	s=p+c+b+m+comp;
	per=(s/500)*100;
	cout<<"the percentage is"<<per<<"%"<<"\n";
	if(per>=90)
  {
	cout<<"the grade achieved is A\n";
  }
            else if(per>=80)
  {
	cout<<"the grade achieved is B\n";
  }
            else if(per>=70)
  {
	cout<<"the grade achieved is C\n";
  }    
            else if(per>=60)
  {
	cout<<"the grade achieved is D\n";
  }
            else if(per>=40)
  {
	cout<<"the grade achieved is E\n";
  }
            else
  {
	cout<<"the grade achieved is F\n";
  }            
	return 0;
  }