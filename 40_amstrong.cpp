#include <iostream>
using namespace std;

bool isamstrong(int n)
{
    int t = n;
    int temp = 0;
    while (n>0)
    {
        int r = n%10;
        n =n/10;
        temp+=(r*r*r);
    }
    if(temp==t)
    {
        return true;
    }
    return false;
    
}

int main()
{
    int n;
    cin>>n;
    if(isamstrong(n))
    {
        cout<<"Number is Amstrong";
    }else{
        cout<<"Number is not Amstrong";
    }
    return 0;
}