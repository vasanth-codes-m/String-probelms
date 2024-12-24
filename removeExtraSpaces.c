#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char string[MAX];
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")]=0;
    char newStr[MAX];
    int i=0;
    int j=0;
    while(string[i]!='\0'){
        if(string[i]==' '){
            newStr[j++]=' ';
            while(string[i]==' '){
                i++;
            }
        }
        else{
        newStr[j++]=string[i++];
        }
    }
    newStr[j]='\0';
    printf("%s",newStr);
    
    return 0;
}
