#include <iostream>
using namespace std;

void pyramid(int n)
{
    for(int i = 0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            if(j<(n-i-1))
            {
                cout<<" ";
            }else{
                cout<<i<<" ";
            }
        }
        // for(int j=0;j<n;j++)
        // {
        //     if(j<=i)
        //     {
        //         cout<<i<<" ";
        //     }else{
        //         cout<<" ";
        //     }
        // }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pyramid(n);
    return 0;
}