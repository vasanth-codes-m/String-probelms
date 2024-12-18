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
    int index = -1;
    int slen = strlen(str);
    int wlen = strlen(word);
    for(int i=0;i<=slen-wlen;i++){
        found = 1;
        for(int j=0;j<wlen;j++){
            if(str[i+j]!=word[j]){
                found=0;
                break;
            }
        }
        if(found==1){
            index = i;
        }
    }
    if(index!=-1){
        printf("%s lastly occured in %d",word,index);
    }
}
