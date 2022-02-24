#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=60)
    {
        cout<<"First";
    }else if(n>=50 && n<60)
    {
        cout<<"Second";
    }else if(n>=40 && n<50)
    {
        cout<<"Third";
    }else{
        cout<<"Failed";
    }
    return 0;
}