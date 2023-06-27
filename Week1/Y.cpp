#include <iostream>
using namespace std;
int main()
{
 long long a,b,c,d;
 long long som;
 cin>>a>>b>>c>>d;
 som=(a%100*b%100*c%100*d%100);
 if(som<10)
 {
      cout<<0<<som<<endl;
 }
 else
 cout<<som<<endl;
   return 0;
}