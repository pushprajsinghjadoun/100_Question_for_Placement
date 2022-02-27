#include <iostream>
using namespace std;

string copy_string(char *p,int n)
{
    string temp="";
    for(int i=0;i<n;i++)
    {
        char t = *p;
        temp+=t;
        p++;
    }
    return temp;
}
int size(char name[])
{
    int c=0;
    for(int i=0;name[i]!='\0';i++)
    {
        c++;
    }
    return c;
}

int main()
{
    char name[20];
	cin >> name;
	cout << name << endl; 
    int n = size(name);
    char *p;
    p = name;
    cout<<copy_string(p,n);
    return 0;
}