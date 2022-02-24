#include <iostream>
using namespace std;

int isfound(int arr[], int s,int n,int k)
{
    
    while(n>=s)
    {
        int mid = s + (n-s)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        if(arr[mid]>k)
        {
           n = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
    
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
    cout<<isfound(arr,0,n,k);
    return 0;
}