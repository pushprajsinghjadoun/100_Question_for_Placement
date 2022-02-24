#include <iostream>
using namespace std;

bool isfound(int arr[],int n, int k)
{
    if(n==0) return false;
    int c = n-1;
    if(n==-1) return false;
    c--;
    if(arr[n-1]==k) return true;
    return isfound(arr,n-1,k);
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