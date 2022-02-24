#include <iostream>
using namespace std;

int sizef(string s)
{
    int c = 0;
    for(int i =0; s[i]!='\0';i++)
    {
        c++;
        if(s[i]==' ') c--;
    }
    return c;
}

bool palidrom(string s,int size)
{
    for(int i =0;i<size;i++)
    {
        if(s[i]!=s[size-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin,s);
    int size = sizef(s);
    bool ispalidrom = palidrom(s,size);
    if(ispalidrom)
    {
        cout<<"Palidrome String"<<endl;
    }else{
        cout<<"Not a palidrome string"<<endl;
    }
    return 0;
}