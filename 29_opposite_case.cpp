#include <iostream>
using namespace std;

int size(string s)
{
    int c= 0;
    for(int i=0;s[i]!='\0';i++)
    {
        c++;
    }
    return c;
}

string opposite(string s,int n)
{
    string temp="";
    int c = s[0];
    if(c>=65 &&c<=90)
    {
        for(int i=0;i<n;i++)
        {
            int c = s[i];
            c+=32;
            char temp1 = char(c);
            temp+=temp1;
        }
    }
    if(c>=97&&c<=122)
    {
        for(int i=0;i<n;i++)
        {
            int c = s[i];
            c-=32;
            char temp1 = char(c);
            temp+=temp1;
        }
    }
    return temp;
};

int main()
{
    string s;
    cin>>s;
    int n = size(s);
    cout<<opposite(s,n);;
    return 0;
}