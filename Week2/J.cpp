#include <iostream>

using namespace std;
int main()
{
 int x;
 int flag=0;
 cin>>x;
 cout<<2;
 for(int i=3;i<=x;i++)
 {
     flag=0;
    for(int j=i-1;j>=2;j--)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<" "<<i;
    }

 }
     return 0;
}
