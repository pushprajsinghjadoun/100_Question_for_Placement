#include <iostream>
using namespace std;

void sortchar(char name[])
{
    int s[100];
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    {
        int n = name[i];
        s[i]=n;
        c++;

    }
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<c-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    string temp="";
    for(int i=0;i<c;i++)
    {
        char t = char(s[i]);
        temp+=t;
    }
    cout<<temp;
}

int main()
{
    char name[100];
    cin>>name;
    sortchar(name);
    return 0;
}