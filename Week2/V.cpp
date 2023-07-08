#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=1;i<4*x;i+=4)
    {
            cout<<i<<" "<<i+1<<" "<<i+2<<" "<<"PUM"<<endl;
    }
    return 0;
}
