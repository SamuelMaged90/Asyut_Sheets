#include <iostream>
 
using namespace std;
 
int main()
{
    int x=1999;
    int input;
    cin>>input;
    while(input!=x)
    {
        cout<<"Wrong"<<endl;
        cin>>input;
    }
    cout<<"Correct"<<endl;
    return 0;
}