#include <iostream>

using namespace std;

int main()
{
   int x,var=0;
   cin>>x;
   for(int i=x;i>0;i--)
   {
       var=i;
       while(var>0)
       {
           cout<<"*";
           var--;
       }
       cout<<endl;
   }
    return 0;
}
