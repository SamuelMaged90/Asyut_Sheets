#include <iostream>
 
using namespace std;
 
int main()
{
    int c;
    cin>>c;
    if(c<2 && c>0)
    {
        cout<<"-1"<<endl;
    }
    for(int i=2; i<=c; i+=2)
    {
        cout<<i<<endl;
    }
    return 0;
}