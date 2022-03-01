#include <iostream>
using namespace std;

typedef struct compelx{
    float real;
    float img;
} complexnumber;

complexnumber add(compelx n1, compelx n2)
{
    compelx temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return temp;
}

complexnumber sub(compelx n1, compelx n2)
{
    compelx temp;
    temp.real = n1.real - n2.real;
    temp.img = n1.img - n2.img;
    return temp;
}
complexnumber mul(compelx n1, compelx n2)
{
    compelx temp;
    temp.real = n1.real * n2.real;
    temp.img = n1.img * n2.img;
    return temp;
}

int main()
{
    compelx n1,n2,sum,subt,multi;
    cout<<"Enter first complex number: ";
    cin>>n1.real>>n1.img;
    cout<<"Enter second complex number: ";
    cin>>n2.real>>n2.img;
    sum = add(n1,n2);
    if(sum.img>0)
    {
        cout<<sum.real<<'+'<<sum.img<<'i'<<endl;
    }else{
        cout<<sum.real<<sum.img<<'i'<<endl;
    }
    subt = sub(n1,n2);
    if(subt.img>0)
    {
        cout<<subt.real<<'+'<<subt.img<<'i'<<endl;
    }else{
        cout<<subt.real<<subt.img<<'i'<<endl;
    }
    multi = mul(n1,n2);
    if(multi.img>0)
    {
        cout<<multi.real<<'+'<<multi.img<<'i'<<endl;
    }else{
        cout<<multi.real<<multi.img<<'i'<<endl;
    }

    
    return 0;
}