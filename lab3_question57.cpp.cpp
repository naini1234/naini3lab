#include<iostream>
using namespace std;
int main(){
     int t1=1,t2=1,n,i=1,t=0;
     cout<<"enter any number\n";
     cin>>n;
     cout<<"the fibonacci series between 1 and n is ";
     for(;i<=n;++i)
     {
           if(i==1)
           {
                cout<<t1<<" ";
           }
           if(i==2)
           {
                cout<<t2<<" ";
           }
     }
     for(;t2+t<=n;t2+t++)
     {
           t=t1+t2;
           t1=t2;
           t2=t;
           cout<<t<<" ";
     }
     return 0;
}
           
