#include <iostream> 
using namespace std;

int main()
{
    char file1[30];
    int character =0, word=0,line=0;
    FILE *fs;
    cout<<"Enter file"<<endl;
    cin>>file1;
    fs = fopen(file1,"r");
    if(fs ==NULL)
    {
        cout<<"File not found"<<endl;
    }
    char file_content = fgetc(fs);
    cout<<file_content;
    while (file_content!=EOF)
    {
        if(file_content!=' ' && file_content!='\n')
               character++;
          if(file_content==' ')
               word++;
          if(file_content=='\n')
          {
               line++;
               word++;
          }
        file_content = fgetc(fs);
    }
    cout<<"word :"<<word<<", character :"<<character<<", line :"<<line+1<<endl;
    fclose(fs);

    return 0;
}