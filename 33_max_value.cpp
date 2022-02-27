#include <iostream>
using namespace std;

int max_value(int arr[],int n)
{
    int s=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(s<arr[i]) s = arr[i];
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max_value(arr,n);
    return 0;
}