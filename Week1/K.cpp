#include <iostream>
using namespace std;
 
int main()
{
    int a,b,c,minn,maxx;
    cin>>a>>b>>c;
    minn=min(a,b);
    minn=min(minn,c);
    maxx=max(a,b);
    maxx=max(maxx,c);
    cout<<minn<<" "<<maxx<<endl;
    return 0;
}