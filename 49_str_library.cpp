#include <iostream>
using namespace std;

typedef struct library
{
    int ac_number,year_pub,price;
    string auther,title,publisher_name;
} lib;

int main()
{
    int n;
    cin>>n;
    library arr[n];
    for(int i=0;i<n;i++)
    {
        library temp;
        cin>>temp.ac_number>>temp.title>>temp.year_pub>>temp.publisher_name>>temp.price;
        getline(cin,temp.auther);
        arr[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].ac_number<<" "<<arr[i].auther<<" "<<arr[i].title<<" "<<arr[i].year_pub<<" "<<arr[i].publisher_name<<" "<<arr[i].price<<endl;
    }
    return 0;
}