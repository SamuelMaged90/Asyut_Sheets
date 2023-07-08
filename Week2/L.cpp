#include <iostream>

using namespace std;
int main()
{
 long num1,num2;
 cin>>num1>>num2;
 long maxx;
 long minn;
 if(num1>num2)
 {
     maxx=num1;
     minn=num2;
 }
 else
 {
     maxx=num2;
     minn=num1;
 }
 for(int i=minn;i>=1;i--)
 {
     if(maxx%i==0)
     {
         if(minn%i==0)
         {
             cout<<i<<endl;
             break;
         }
     }
 }

     return 0;
}
