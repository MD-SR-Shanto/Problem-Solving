#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, n, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);
    for(i=0; i<n/2; i++) {
        if(str[i] != str[n-i-1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    return 0;
}

