#include <iostream>
using namespace std;

int sizeofstring(string s)
{
    int i=0,k=0;
    for(i;s[i]!='\0';i++)
    {
        k++;
        if(s[i]==' ') k--;
    }
    return k;
    
}
string reverse(string s,int size)
{
    string res = "";
    for(int i =size;i>=0;i--)
    {
        res+= s[i];
    }
    return res;
}

int main()
{
    string s;
    getline(cin,s);
    int h = sizeofstring(s);
    cout<<reverse(s,h);
    return 0;
}