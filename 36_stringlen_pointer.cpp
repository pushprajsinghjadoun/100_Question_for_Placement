#include <iostream>
using namespace std;

int size(char *p)
{
    int c=0;
    for(int i=0;*p!='\0';i++)
    {
        p++;
        c++;
    }
    return c;
}

int main()
{
    char name[100];
    cin>>name;
    char *p = name;
    cout<<size(p);
    return 0;
}