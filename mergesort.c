#include <stdio.h>
#include <string.h>

int isValidString(char input[]) {
    int length = strlen(input);
    int i = 0;

    // Check for ((a+b)(c+d))+ab*c*d
    while (i < length) {
        // Check for (a+b)(c+d)
        while (i < length && (input[i] == 'a' || input[i] == 'b')) {
            i++;
        }
        while (i < length && (input[i] == 'c' || input[i] == 'd')) {
            i++;
        }

        // Check for ab*c*d
        if (i < length && input[i] == 'a') {
            i++;
            if (i < length && input[i] == 'b') {
                i++;
            } else {
                return 0; // Invalid string
            }
        } else if (i < length && input[i] == 'c') {
            i++;
            if (i < length && input[i] == 'd') {
                i++;
            } else {
                return 0; // Invalid string
            }
        } else {
            return 0; // Invalid string
        }
    }

    // If the string is fully processed, it is valid
    return 1;
}

int main() {
    char input[100];

    // Get the input string from the user
    printf("Enter a string (a, b, c, d): ");
    scanf("%s", input);

    // Check if the input string is valid
    if (isValidString(input)) {
        printf("The string \"%s\" belongs to the language.\n", input);
    } else {
        printf("The string \"%s\" does not belong to the language.\n", input);
    }

    return 0;
}
