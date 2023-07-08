#include <iostream>

using namespace std;

int main()
{
   char x;
   int y;
   cin>>x>>y;
   int arr[y];
   for(int i=0;i<y;i++)
   {
       cin>>arr[i];
   }
   for(int j=0;j<y;j++)
   {
       while(arr[j]>0)
       {
           cout<<x;
           arr[j]--;
       }
       cout<<endl;
   }
    return 0;
}
