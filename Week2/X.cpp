#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h,x,var_x=0,ones=0,value=0;
    cin>>h;
    if(h>=1 && h<=10)
    {
    while(h--)
    {
    cin>>x;
    var_x=x;
    value=0;
    ones=0;
    while(var_x>0)
    {
        ones+=var_x%2;
        var_x/=2;
    }
    for(int i=0;i<ones;i++)
    {
        value = value + pow(2,i) ;
    }
    cout<<value<<endl;
    }
    }
    return 0;
}
