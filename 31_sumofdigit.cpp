#include <iostream>
using namespace std;

int sumofdigit(int n)
{
    int s=0;
    while(n>0)
    {
        int r = n%10;
        n = n/10;
        s+=r;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int s = sumofdigit(n);
    cout<<s;
    return 0;
}