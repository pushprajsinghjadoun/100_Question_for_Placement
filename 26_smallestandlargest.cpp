#include <iostream>
using namespace std;

int smallest_number(int arr[],int n)
{
    int sm=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(sm>arr[i])
        {
            sm = arr[i];
        }
    }
    return sm;

};

int largest_number(int arr[],int n)
{
    int l = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l = arr[i];
        }
    }
    return l;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ss = smallest_number(arr,n);
    int ll = largest_number(arr,n);
    cout<<ss<<" "<<ll;
    return 0;
}