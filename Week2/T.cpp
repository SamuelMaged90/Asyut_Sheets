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
    return 0;
}
