#include <iostream>
using namespace std;
int main()
{
   char X;
   cin>>X;
   if(X>=65 && X<91)
   {
     int x= (int)X+32;
     cout<<(char)x<<endl;
   }
   else if(X>=97 && X<123)
   {
      int x= (int)X-32;
     cout<<(char)x<<endl;
   }
    return 0;
}