#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n%4==0 && n%100!=0) || n%400==0)
    {
        cout<<"Year is a leap year"<<endl;
    }else{
        cout<<"Year is not a leap year"<<endl;
    }
    return 0;
}