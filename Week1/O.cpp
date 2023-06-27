#include <iostream>
using namespace std;
int main()
{
   int x,y ; char s;
   cin>>x>>s>>y;
   switch(s)
   {
       case '+': cout<<x+y<<endl;
       break;
       case '-': cout<<x-y<<endl;
       break;
       case '*': cout<<x*y<<endl;
       break;
       case '/': cout<<x/y<<endl;
       break;
   }
    return 0;
}