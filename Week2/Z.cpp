#include <iostream>

using namespace std;

int main()
{
   int maxx,num,counter=0;
   cin>>maxx>>num;
   for(int i=0;i<=maxx;i++)
   {
       for(int j=0;j<=maxx;j++)
       {
           if(num-i-j >=0 && num-i-j <=maxx)
           {
               counter++;
           }
       }
   }
   cout<<counter<<endl;
    return 0;
}

/* 5 = 2 + 3 ;
   5 - 2 - 3 = 0
   2 + 3 + 0 = 5
   when we subtract 2 values from the input number it will be 0 or value greater then 0 ..
   and the rest will be the third value
*/
