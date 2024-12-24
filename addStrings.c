#include <stdio.h>
#include <string.h>
#define MAX 100
void reverse(char* arr){
    int start = 0;
    int end = strlen(arr)-1;
    while(start<end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    char num1[MAX];
    char num2[MAX];
    char ans[MAX];
    int index=0;
    int carry = 0;
    fgets(num1,MAX,stdin);
    fgets(num2,MAX,stdin);
    num1[strcspn(num1,"\n")]=0;
    num2[strcspn(num2,"\n")]=0;
    int n1=strlen(num1)-1;
    int n2=strlen(num2)-1;
    while(n1>=0 || n2>=0){
        if(n1<0){
            ans[index++]=((num2[n2]-48+carry)%10)+48;
            carry = (num2[n2]-48+carry)/10;
            n2--;
        }
        else if(n2<0){
            ans[index++]=((num1[n1]-48+carry)%10)+48;
            carry = (num1[n1]-48+carry)/10;
            n1--;
        }
        else{
            ans[index++]=((num1[n1]-48 + num2[n2]-48 + carry)%10)+48;
            carry = ((num1[n1]-48)+num2[n2]-48 + carry)/10;
            n1--;
            n2--;
        }
    }
    ans[index]='\0';
    reverse(ans);
    printf("%s",ans);
    return 0;
}
