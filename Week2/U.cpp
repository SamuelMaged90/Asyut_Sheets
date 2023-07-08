#include <iostream>

using namespace std;

int main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=1; i<=a; i++)
    {
        int var=i;
        int digits=0;
        while(var>0)
        {
            int z=var%10;
            digits+=z;
            var=var/10;
        }
        if(digits>=b && digits<=c)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
