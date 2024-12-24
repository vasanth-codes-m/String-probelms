#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* arr) {
    int start = 0;
    int end = strlen(arr) - 1;
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

char* addStrings(char* num1, char* num2) {
    int carry = 0;
    int n1 = strlen(num1) - 1;
    int n2 = strlen(num2) - 1;
    
    // Allocate memory to hold the result, considering carry overflow
    char* ans = (char*)malloc((n1 > n2 ? n1 : n2) + 2 + sizeof(char));  // +2 for carry and '\0'

    int index = 0;
    while (n1 >= 0 || n2 >= 0 || carry > 0) {
        int digit1 = (n1 >= 0) ? num1[n1] - '0' : 0;
        int digit2 = (n2 >= 0) ? num2[n2] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        ans[index++] = (sum % 10) + '0';  // Convert to character and add to result
        carry = sum / 10;

        if (n1 >= 0) n1--;
        if (n2 >= 0) n2--;
    }

    ans[index] = '\0';  // Null-terminate the result string
    reverse(ans);  // Reverse the string to get the final result

    return ans;
}

int main() {
    char num1[] = "9";
    char num2[] = "1";

    char* result = addStrings(num1, num2);  // Call the function to add the strings
    printf("Sum: %s\n", result);  // Output the result

    free(result);  // Free the dynamically allocated memory

    return 0;
}

