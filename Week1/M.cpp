#include <iostream>
using namespace std;
int main()
{
   char X;
   cin>>X;
   if(X>=48 && X<58)
       cout<<"IS DIGIT"<<endl;
   else if(X>=65 && X<91)
   {
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
   }
   else if(X>=97 && X<123)
   {
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
   }
    return 0;
}