#include <iostream>

using namespace std;
void factorial(int num);

int main()
{
    long long num1;
    cin>>num1;
    long long arr[num1];
    for(int i=0;i<num1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<num1;i++)
    {
        factorial(arr[i]);
    }
    return 0;
}
void factorial(int num)
{
    long long fact =1;
    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }
    cout <<fact<<endl;
}
