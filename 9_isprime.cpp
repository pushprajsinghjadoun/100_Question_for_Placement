#include <iostream>
using namespace std; 

bool isprime(int n)
{
    int m = n/2;
    for(int i =0;i<m;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"number is a prime number"<<endl;
    }else{
        cout<<"Number is not a prime number"<<endl;
    }
    return 0;
}