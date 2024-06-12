#include <stdio.h>  // Include standard input-output library for printf and scanf functions
#include <string.h> // Include string library for strlen function
#include <ctype.h>  // Include ctype library for tolower function

// Function to convert a string to lowercase
void toLowerCase(char *str) {
    // Iterate over each character in the string until the null terminator is reached
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);  // Convert the character to lowercase
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int len = strlen(str);  // Get the length of the string
    // Loop from the start of the string to the middle of the string
    for (int i = 0; i < len / 2; i++) {
        // Compare the character from the start with the character from the end
        if (str[i] != str[len - i - 1]) {
            return 0;  // If any characters don't match, return 0 (False)
        }
    }
    return 1;  // If all characters match, return 1 (True)
}

int main() {
    char str[100];  // Declare a character array to store the input string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    // Read the input string from the user
    scanf("%s", str);

    // Convert the string to lowercase
    toLowerCase(str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("True\n");  // Print "True" if the string is a palindrome
    } else {
        printf("False\n");  // Print "False" if the string is not a palindrome
    }

    return 0;  // Return 0 to indicate successful execution
}
