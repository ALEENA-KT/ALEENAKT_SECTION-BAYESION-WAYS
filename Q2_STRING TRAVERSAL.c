#include <stdio.h>
#include <string.h>

int countOccurrences(char *str, char *substr) {
    int count = 0;  // Initialize the count of occurrences
    int lenStr = strlen(str);  // Length of the main string
    int lenSubstr = strlen(substr);  // Length of the substring

    // Traverse the main string
    for (int i = 0; i <= lenStr - lenSubstr; i++) {
        // Check if the substring matches the part of the main string starting at index i
        if (strncmp(&str[i], substr, lenSubstr) == 0) {
            count++;  // Increment the count if a match is found
        }
    }

    return count;  // Return the total count of occurrences
}

int main() {
    char str[1000];  // Buffer for the main string
    char substr[100];  // Buffer for the substring

    // Read the main string from the user
    printf("Enter the original string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the trailing newline character

    // Read the substring from the user
    printf("Enter the substring: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0';  // Remove the trailing newline character

    // Count the occurrences of the substring in the main string
    int occurrences = countOccurrences(str, substr);

    // Print the result
    printf("The substring occurs %d times in the given string.\n", occurrences);

    return 0;  // Return 0 to indicate successful execution
}
