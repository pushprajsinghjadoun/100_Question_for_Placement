#include <iostream>
using namespace std;

union un{
    int n;
    int k;
};

int main()
{
    union un n1,n2;
    cin>>n1.k>>n1.n;
    cin>>n2.k>>n2.n;
    cout<<endl<<"Output"<<endl;
    cout<<n1.k<<" "<<n1.n<<endl;
    cout<<n2.k<<" "<<n2.n<<endl;
    return 0;
}