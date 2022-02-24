#include <iostream>
using namespace std;

bool isfound(int arr[],int n, int k)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(isfound(arr,n,k))
    {
        cout<<"Yes Found in a array";
    }else{
        cout<<"No such array found in a array";
    }
    return 0;
}