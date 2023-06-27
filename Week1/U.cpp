#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     float a;
     cin>>a;
     int k=a;
     float x=a-k;
     cout<<fixed<<setprecision(3);
     if(x==0)
     {
         cout<<"int "<<k<<endl;
     }
     else
        cout<<"float "<<k<<" "<<x<<endl;
            return 0;
}