#include <iostream>

using namespace std;

int main()
{
    long x,y,sum,maxx,minn;
    while(1)
    {
        sum=0;
        cin>>x>>y;
        maxx=max(x,y);
        minn=min(x,y);
        if(x <=0 || y<=0)
        {
          return 0;
        }
        else
        {
            for(long i=minn; i<=maxx; i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
    }
    return 0;
}
