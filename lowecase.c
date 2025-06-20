#include <stdio.h>

int main() {
    char ch;

  
    printf("Enter a character: ");
 
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
       
        ch = ch - 32;
        printf("Converted to uppercase: %c\n", ch);
    }
   
    else if (ch >= 'A' && ch <= 'Z') {
       
        ch = ch + 32;
        printf("Converted to lowercase: %c\n", ch);
    }
   
    else {
        printf("Invalid input. Please enter an alphabet (a-z or A-Z).\n");
    }

    return 0;
}