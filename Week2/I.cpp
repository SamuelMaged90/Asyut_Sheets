#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num1 ;
    cin>>num1;

    char arr[num1.size()];
    for(int i=num1.size()-1;i>=0;i--)
    {
        arr[num1.size()-1-i]=num1[i];
    }

    int num_1,num_2;
    stringstream S1,S2;
    S1<<num1;
    S1>>num_1;

    S2<<arr;
    S2>>num_2;

    if(num_1==num_2)
    {
        cout<<num_2<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<num_2<<endl;
        cout<<"NO"<<endl;
    }
    return 0;
}

