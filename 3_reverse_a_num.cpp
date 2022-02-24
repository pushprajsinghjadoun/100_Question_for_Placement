#include <iostream>
using namespace std;

int reverse(int num)
{
    int res=0;
    while (num>0)
    {
        int r = num%10;
        num = num/10;
        res = res*10 + r;
    }
    return res;
    
}

int main()
{
    int num;
    cin>>num;
    cout<<reverse(num)<<endl;
    return 0;
}