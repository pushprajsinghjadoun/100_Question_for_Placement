#include <iostream>
using namespace std;

int main()
{
    char textcopy[30],textpaste[30];
    FILE *fs, *ft;
    cout<<"Enter the name of file where you want to copy content :"<<endl;
    cin>>textcopy;
    cout<<"Enter name of file where you want to paste content :"<<endl;
    cin>>textpaste;
    fs = fopen(textcopy,"r");
    ft = fopen(textpaste,"w");
    if(fs==NULL)
    {
        cout<<"File is not found or no value in a copy content file"<<endl;
        return 0;
    }
    if(fs==NULL)
    {
        cout<<"File is not found"<<endl;
        return 0;
    }
    char copy_content = fgetc(fs);
    while (copy_content!=EOF)
    {
        fputc(copy_content,ft);
        copy_content = fgetc(fs);
    }
    cout<<"File Copied";
    fclose(fs);
    fclose(ft);

    return 0;
}