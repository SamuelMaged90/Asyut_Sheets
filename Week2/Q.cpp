#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case ;
    cin>>test_case;
    while(test_case--)
    {
        string num;
        cin>>num;
        for(int i=num.size()-1;i>=0;i--)
        {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

