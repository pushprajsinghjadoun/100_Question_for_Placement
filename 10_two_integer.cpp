#include <iostream>
using namespace std;

void interchange_value(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    interchange_value(a,b);
    return 0;
}