#include <iostream>
using namespace std;

int ncr(int n, int r)
{
    int upper = 1;
    int diif = n-r;
    int co = n;
    do
    {
        upper = upper*co;
        co--;
    } while (co>diif);

    int lower = 1;
    co = 1;
    do
    {
        lower = lower*co;
        co++;
    } while (co<=r);
    return upper/lower;
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}