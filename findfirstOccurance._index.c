#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    char str[MAX];
    int i,found;
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]=0;
    int length = strlen(str);
     char word[MAX];
    fgets(word,MAX,stdin);
    word[strcspn(word,"\n")]=0;
    int index = 0;
    while(str[index]!='\0'){
        if(str[index]==word[0]){
            i = 0;
            found = 1;
            while(word[i]!='\0'){
                if(str[index+i]!=word[i]){
                    found = 0;
                    break;
                }
                i++;
            }
        }
        if(found==1){
            break;
        }
        index++;
    }
    if(found){
        printf("%s found at %d",word,index);
    }
    return 0;
}
