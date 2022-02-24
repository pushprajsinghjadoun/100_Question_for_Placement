#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
int main()
{
	int a,b;
    cin>>a>>b;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}
