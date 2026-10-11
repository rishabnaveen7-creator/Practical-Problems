#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    // Base case: if we've gone through the entire string, return
    if (str[index] == '\0') {
        return; 
    }
    
    // Recursive case: call function for next character first
    reverseString(str, index + 1);
    
    // Then print the current character (prints in reverse order)
    printf("%c", str[index]);
}

int main() {
    char message[101];
    
    // Read the input string
    scanf("%100s", message);
    
    // Call recursive function starting from index 0
    reverseString(message, 0);
    printf("\n");
    
    return 0;
}
