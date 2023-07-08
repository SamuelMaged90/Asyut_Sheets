#include <iostream>

using namespace std;

int main()
{
    int a,odd=0,num1,num2,maxx,minn;
    cin>>a;
    while(a--)
    {
        odd=0;
        cin>>num1>>num2;
        if(num1>=num2)
        {
            maxx=num1;
            minn=num2;
        }
        else
        {
            maxx=num2;
            minn=num1;
        }
        for(int j=minn+1 ;j<maxx;j++)
        {
            if(j%2 !=0)
            {
                odd+=j;
            }
        }
        cout<<odd<<endl;
    }
    return 0;
}
