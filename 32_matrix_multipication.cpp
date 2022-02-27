#include <iostream>
using namespace std;

int  main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int nn,mm;
    cin>>nn>>mm;
    int ar[nn][mm];
    for(int i=0;i<nn;i++)
    {
        for(int j=0;j<mm;j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0;i<nn;i++)
    {
        for(int j=0;j<mm;j++)
        {
            cout<<arr[i][j]*ar[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}