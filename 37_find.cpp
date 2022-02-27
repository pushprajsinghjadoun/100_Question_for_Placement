#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    double sum = 0;
    for(int i =1;i<=n;i++)
    {
        double tt = 1.0/i;
        sum+=tt;
    }
    cout<<sum;
    return 0;
}