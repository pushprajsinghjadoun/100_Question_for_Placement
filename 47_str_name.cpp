#include <iostream>
using namespace std;

typedef struct student
{
    int sno;
    string sname;
    float marks;
} tstu;

void read(tstu arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].sno<<" "<<arr[i].sname<<" "<<arr[i].marks<<endl;
    }
}
void av_marks(tstu arr[],int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i].marks>=a)
        {
            cout<<arr[i].sno<<" "<<arr[i].sname<<" "<<arr[i].marks<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a=0;
    tstu arr[n];
    for(int i=0;i<n;i++)
    {
        int sn; string sna; float mark;
        tstu temp;
        cin>>sna>>mark;
        temp.sno = i+1;
        temp.sname = sna;
        temp.marks = mark;
        arr[i]=temp;
        a+=mark;
    }
    a= a/n;
    cout<<endl;
    read(arr,n);
    cout<<endl<<endl;
    av_marks(arr,n,a);
    return 0;
}