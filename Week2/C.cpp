#include <iostream>

using namespace std;

int main()
{
    int c,even=0,odd=0,pos=0,neg=0;
    cin>>c;
    int arr[c];
    for(int i=0;i<c;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<c;j++)
    {
        if(arr[j]>0)
        {
            pos++;
        }
        if(arr[j]<0)
        {
            neg++;
        }
        if(arr[j]%2==0)
        {
            even++;
        }
        if(arr[j]%2!=0)
        {
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;

    return 0;
}
