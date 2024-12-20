#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    int found;
    int index = - 1;
    char string[MAX];
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")]=0;;
    char toRemove[MAX];
    scanf("%s",toRemove);
    int len = strlen(string);
    int rlen = strlen(toRemove);
    for(int i=0;i<=len-rlen;i++){
        found = 1;
        for(int j=0;j<rlen;j++){
            if(string[i+j]!=toRemove[j]){
                found = 0;
                break;
            }
        }
        if(found){
            index = i;
        }
    }
    for(int i=index;i<=len-rlen;i++){
        string[i-1]=string[i+rlen];
    }
    string[len-rlen]='\0';
    printf("%s",string);

    return 0;
}
