#include <iostream>
using namespace std;

void fabo(int n)
{
    if(n==0)
    {
        cout<<"Invalid value"<<endl;
    }else if(n==1)
    {
        cout<<0<<endl;
    }else if(n==2)
    {
        cout<<0<<" "<<1<<endl;
    }else{
        cout<<0<<" "<<1<<" ";
        int temp = 1;
        int prev = 0;
        for(int i=3;i<=n;i++)
        {
            int re = temp + prev;
            cout<<re<<" ";
            int te = temp;
            temp = re;
            prev = te;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    fabo(n);

    return 0;
}