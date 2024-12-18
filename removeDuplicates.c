#include <stdio.h>
#include<string.h>
#define MAX 100
void removeDuplicates(char* str,char toRemove,int index){
    while(str[index]!='\0'){
        int i;
        if(str[index]==toRemove){
            i = index;
            while(str[i]!='\0'){
                str[i]=str[i+1];
                i++;
            }
        }
        else{
            index++;
        }
    }
}
int main()
{
    char str[100];
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]=0;
    int length = strlen(str);
    int i = 0;
    while(str[i]!='\0'){
        removeDuplicates(str,str[i],i+1);
        i++;
    }
    printf("%s",str);
}
