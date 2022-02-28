#include <iostream>
using namespace std;

bool isidentical(string s1, string s2)
{
    if(s1==s2)
    {
        return true;
    }
    return false;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isidentical(s1,s2))
    {
        cout<<"Identical String";
    }else{
        cout<<"Not identical string";
    }
    return 0;
}