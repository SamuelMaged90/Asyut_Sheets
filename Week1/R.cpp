#include <iostream>
using namespace std;
int main()
{
    int days,year,month;
    cin>>days;
    year=days/365;
    month=(days-(year*365))/30;
    days=days-(month*30)-(year*365);
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<days<<" days"<<endl;
    return 0;
}