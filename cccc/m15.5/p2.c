#include <stdio.h>

int my_len(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char myString[1000];  // Assuming a maximum string length of 100 characters
    printf("Enter a string: ");
    scanf("%s", myString); // Read a string from the user

    int length = my_len(myString);
    printf("Length of the string: %d\n", length);
    return 0;
}

