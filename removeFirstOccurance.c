#include <stdio.h>
#include<string.h>
#define MAX 100
#define MAX_CHARS 255
int main()
{
    char string[MAX];
    fgets(string,MAX,stdin);
    string[strcspn(string,"\n")]=0;
    char c;
    scanf("%c",&c);
    int i=0;
    int n = strlen(string);
    while(i<n && string[i]!=c){
        i++;
    }
    while(i<n){
        string[i]=string[i+1];
        i++;
    }
    printf("%s",string);
}
