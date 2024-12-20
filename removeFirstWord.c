#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
    int found;
    char string[MAX];
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")]=0;;
    char toRemove[MAX];
    scanf("%s",toRemove);
    int len = strlen(string);
    int rlen = strlen(toRemove);
    for(int i=0;i<len;i++){
        found = 1;
        for(int j=0;j<rlen;j++){
            if(string[i+j]!=toRemove[j]){
                found = 0;
                break;
            }
        }
        if(found){
            for(int j=i;j<len-rlen;j++){
                string[j]=string[j+rlen];
            }
            string[len - rlen] = '\0';
            break;
        }
    }
    printf("%s",string);

    return 0;
}
