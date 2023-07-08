#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<x-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<(2*i)-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=x;i>0;i--)
    {
        for(int j=x-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=(2*i)-1;k>0;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
