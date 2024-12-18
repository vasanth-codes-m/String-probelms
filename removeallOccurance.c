#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[100];
    fgets(str,MAX,stdin);
    str[strcspn(str,"\n")]=0;
    char toRemove;
    scanf("%c",&toRemove);
    int length = strlen(str);
    for(int itr=0;itr<length;itr++){
        if(str[itr]==toRemove){
            for(int itr2=itr;itr2<length;itr2++){
                str[itr2]=str[itr2+1];
            }
            itr--;
            length--;
        }
    }
    printf("%s",str);
}
