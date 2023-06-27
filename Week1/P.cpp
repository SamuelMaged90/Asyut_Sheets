#include <iostream>
using namespace std;
int main()
{
   int x,y;
   cin>>x;
   if(x>999 && x<=9999)
   {
   y=x/1000;
   if(y%2==0)
    cout<<"EVEN"<<endl;
   else
    cout<<"ODD"<<endl;
   }
    return 0;
}