#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0) return 0;
    int temp = 1;
    for(int i =1;i<=n;i++)
    {
        temp = temp*i;
    }
    return temp;
}

int main()
{
    int n = 0;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}