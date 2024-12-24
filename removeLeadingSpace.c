#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char string[MAX];
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")]=0;
    int index = 0;
    while(string[index]==' '){
        index++;
    }
    if(index!=0){
        int i =0;
        while(string[i+index]!='\0'){
            string[i]=string[index+i];
            i++;
        }
        string[i]='\0';
    }
    printf("%s",string);
    return 0;
}
