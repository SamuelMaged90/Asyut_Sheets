#include <iostream>
#include<math.h>
using namespace std;
int main()
{
 long long a,b,c,d;
 double e,f;
 cin>>a>>b>>c>>d;
 e=log(a)*b;
 f=log(c)*d;
 if(e>f)
 {
     cout<<"YES"<<endl;
 }
 else
    cout<<"NO"<<endl;
   return 0;
}