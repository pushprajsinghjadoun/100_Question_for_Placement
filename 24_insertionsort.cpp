#include <iostream>
using namespace std;

void selectionsort(int arr[], int n)
{
    for(int i =1;i<n;i++)
    {
        int id = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>id)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = id;
        
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