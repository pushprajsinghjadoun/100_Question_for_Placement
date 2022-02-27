#include <iostream>
using namespace std;

int ncr(int n, int c)
{
    int r =0;
    int difference = n-c;
    int upper = 1;
    for(int i=n;i>difference;i--) upper = (upper*i);
    int lower = 1;
    for(int i=2;i<=c;i++)  lower = lower*i;
    return upper/lower;
}

int main()
{
    int n,c;
    cin>>n>>c;
    cout<<ncr(n,c);
    return 0;
}