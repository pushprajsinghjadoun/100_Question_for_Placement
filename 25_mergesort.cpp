#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for(int i =0;i<n-1;i++)
    {
        int id = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[id])
            {
                id = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[id];
        arr[id] = temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int n,k;
   cin>>n;
   int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    return 0;
}