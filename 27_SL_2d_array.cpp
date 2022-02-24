#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ss = INT_MAX;
    int ll = INT_MIN;
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ss>arr[i][j])
            {
                ss = arr[i][j];
            }
            if(ll<arr[i][j])
            {
                ll = arr[i][j];
            }
        }
    }
    cout<<ss<<" "<<ll;
    return 0;
}