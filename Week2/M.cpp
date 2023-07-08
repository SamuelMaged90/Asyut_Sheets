#include <iostream>

using namespace std;

int main()
{
    int x,y,flag=0;
    cin>>x>>y;
    for(int i=x; i<=y; i++)
    {
        int state =0;
        int var=i;
        while(var>=1)
        {
            if(var%10 != 4 && var%10 !=7)
            {
                state++;
            }
            var=var/10;
        }
        if(state==0)
        {
            cout<<i<<" ";
            flag++;
        }
    }
    if (flag==0)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
