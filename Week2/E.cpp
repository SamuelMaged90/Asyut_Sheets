#include <iostream>

using namespace std;

int main()
{
  int num,maxx=0;
  cin>>num;
  int arr[num];
  for(int i=0;i<num;i++)
  {
      cin>>arr[i];
  }
  maxx=arr[0];
   for(int j=1;j<num;j++)
   {
       if(arr[j]>maxx)
       {
           maxx=arr[j];
       }
   }
   cout<<maxx<<endl;
    return 0;
}
