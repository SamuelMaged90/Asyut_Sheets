#include <iostream>
using namespace std;
int main()
{
 int a,b,d;
 char c,f;
 cin>>a>>c>>b>>f>>d;
 switch(c)
 {
     case '+' : {
                if(a+b ==d)
                {
                 cout<<"Yes"<<endl;
                }
                 else
                cout<<a+b<<endl;
                 }break;
      case '-' : {
                if((a-b) ==d)
                 cout<<"Yes"<<endl;
                 else
                cout<<a-b<<endl;
                 }break;
      case '*' : {
                if((a*b) ==d)
                 cout<<"Yes"<<endl;
                 else
                cout<<a*b<<endl;
                 }break;
 }
   return 0;
}