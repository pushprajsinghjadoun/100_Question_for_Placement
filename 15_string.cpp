#include <iostream>
using namespace std;

int size(string s)
{
    int c=0;
    for(int i=0;s[i]!='\0';i++)
    {
        c++;
    }
    return c;
}

string adding(string s,string u,int a, int n)
{
    string temp="";
    if(a<=n)
    {
        for(int i =0;i<a;i++)
        {
            char ch = s[i];
            temp+=ch;
        }
        temp+=u;
        for(int i=a;i<n;i++)
        {
            char ch = s[i];
            temp+=ch;
        }
    }
    return temp;
}

string deleting(string s,int a,int b,int size)
{
    string temp="";
    int k = a+b;
    for(int i =0;i<a;i++)
    {
        char ch = s[i];
        temp+=ch;
    }
    for(int i=k;i<size;i++)
    {
        char ch = s[i];
        temp+=ch;
    }
    return temp;
}

int main()
{
    string s,u;
    int a,b;
    // cin>>s>>u>>a;
    cin>>s>>a>>b;
    int n = size(s);
    // cout<<adding(s,u,a,n);
    cout<<deleting(s,a,b,n);
    return 0;
}