#include <iostream>
using namespace std;

struct compare{
    int a;
    int b;
};

int main()
{
    struct compare data1 = {2,5};
    struct compare data2 = {2,5};
    if(data1.a==data2.a && data1.b==data2.b)
    {
        cout<<"structure variable is same";
    }else{
        cout<<"structure variable is not same";
    }
    return 0;
}