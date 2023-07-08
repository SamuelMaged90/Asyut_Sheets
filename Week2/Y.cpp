#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[x+3];
    arr[0]=0;
    arr[1]=1;
    for(int i=0;i<x;i++)
    {
        if (i== 0 || i==1)
        {
            cout<<arr[i]<<" ";
        }
        else
        {
            arr[i]=arr[i-1]+arr[i-2];
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
