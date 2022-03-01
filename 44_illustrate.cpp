#include <iostream>
using namespace std;

int n;
int glo=0;
int main()
{
    string s="Pushpraj";
    //automatic 
    for(auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //extern
    extern int n;
    n=10;
    cout<<n<<endl;

    //static
    
    for(int i =0;i<5;i++)
    {
        static int k=0;
        k++;
        cout<<k<<" ";
    }
    cout<<endl;
    //register
    register int l =0;
    cout<<"value stored in register is "<<l<<endl;
    // global variable
    cout<<glo<<endl;
    return 0;
}