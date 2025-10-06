#include <stdio.h>
#include <string.h>

// Function to reverse a string
void REVERSE(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;
    
    // Swap characters from start and end until they meet in middle
    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move pointers
        start++;
        end--;
    }
}

// Recursive version for demonstration
void reverse_recursive(char str[], int start, int end) {
    if (start >= end)
        return;
    
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursive call
    reverse_recursive(str, start + 1, end - 1);
}

int main() {
    char str[100];
    char original[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    // Save original string
    strcpy(original, str);
    
    // Reverse using iterative function
    REVERSE(str);
    printf("Reversed string (iterative): %s\n", str);
    
    // Restore original and use recursive version
    strcpy(str, original);
    reverse_recursive(str, 0, strlen(str) - 1);
    printf("Reversed string (recursive): %s\n", str);
    
    // Demonstrate palindrome check
    strcpy(str, original);
    REVERSE(str);
    if (strcmp(original, str) == 0) {
        printf("The string is a palindrome!\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}